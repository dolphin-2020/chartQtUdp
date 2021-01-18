#include "dialog.h"
#include "ui_dialog.h"
#include <QDataStream>
#include<QDateTime>
dialog::dialog(QWidget *parent,QString name) :
    QWidget(parent),
    ui(new Ui::dialog)
{
    ui->setupUi(this);
    udpSocket=new QUdpSocket(this);
    uName=name;
    this->port=9999;

    //采用shareAddress模式（即允许其他的服务连接到相同的地址和端口，特别是在多客户端
    //监听同一个服务球场端口等时特别有效）和reuseaddresshint模式（重新连接服务器）
    udpSocket->bind(port,QUdpSocket::ShareAddress|QUdpSocket::ReuseAddressHint);

    //发送新用户进入
    sndMsg(UsrEnter);

    //点击发送按钮发送消息
    connect(ui->sendBtn,&QPushButton::clicked,[=](){
        sndMsg(Msg);
    });

    //监听别人发给我的消息
    connect(udpSocket,&QUdpSocket::readyRead,this,&dialog::Receivemessage);
}

dialog::~dialog()
{
    delete ui;
}
void dialog:: closeEvent(QCloseEvent *event)
{
    emit this->closewidge();
    sndMsg(Usrleft);
    udpSocket->close();
    udpSocket->destroyed();
    QWidget::closeEvent(event);
}

void dialog::sndMsg(MsgType type)
{
    //发送的消息分为三种类型
    //发送的数据做分段处理，第一段 类型，第二段 用户名，第三段 具体内容
    QByteArray array;
    QDataStream stream(&array,QIODevice::WriteOnly);
    stream<<type<<getUsr();//第一段，二段内容添加到流中

    switch (type) {
    case Msg://普通发送消息
        if(ui->msgTextEdit->toPlainText().isEmpty())//如果用户没有输入内容，不发
        {
            return ;
        }
        else
        {
            stream<<getMsg();//第三段
        }
        break;
    case UsrEnter://用户进入消息

        break;
    case Usrleft://用户离开消息

        break;
    }
    //书写报文
    udpSocket->writeDatagram(array,QHostAddress::Broadcast,port);

}//广播UDP消息

void dialog::usrEnter(QString userName)
{
    bool isEmpty1=ui->usrtable->findItems(userName,Qt::MatchExactly).isEmpty();
    if(isEmpty1)
    {
        QTableWidgetItem *usr=new QTableWidgetItem(userName);
        ui->usrtable->insertRow(0);
        ui->usrtable->setItem(0,0,usr);
        //追加聊天记录O
        ui->msgBrowser->setTextColor(Qt::gray);
        ui->msgBrowser->append(QString("%1 Onling").arg(userName));
        //在线人数更新
        ui->usrNumber->setText(QString("Online Number: %1").arg(ui->usrtable->rowCount()));

        //把自身的信息广播出去,当别人上线时也能收到我
        sndMsg(UsrEnter);
    }
}

void dialog::usrLeft(QString usrName, QString time)
{
    bool isEmpty=ui->usrtable->findItems(usrName,Qt::MatchExactly).isEmpty();
    if(!isEmpty)
    {
        int row=ui->usrtable->findItems(usrName,Qt::MatchExactly).first()->row();
        ui->usrtable->removeRow(row);

        //追加聊天记录
        ui->msgBrowser->setTextColor(Qt::gray);
        ui->msgBrowser->append(QString("%1 leave at %2").arg(time));
        //在线人数更新
         ui->usrNumber->setText(QString("Online Number: %1").arg(ui->usrtable->rowCount()));
    }
}

QString dialog::getUsr()
{
    return this->uName;
}

QString dialog::getMsg()
{
    QString str=ui->msgTextEdit->toHtml();
    //清空输入框
    ui->msgTextEdit->clear();
    ui->msgTextEdit->setFocus();
    return str;
}

void dialog::Receivemessage()
{
    //先拿到数据报文
    qint64 size=udpSocket->pendingDatagramSize();
    QByteArray array=QByteArray(size,0);
    udpSocket->readDatagram(array.data(),size);

    //解析数据
    //第一段 类型，第二段 用户名，第三段 数据
    QDataStream stream(&array,QIODevice::ReadOnly);

    int msgType;//读取到类型
    QString userName;//读取用户名
    QString msg;//读取信息
    //获取当前的时间
    QString time=QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    stream>>msgType;//输出到msgType中

    switch (msgType) {
    case Msg://普通聊天
        stream>>userName>>msg;//输出到usrName和msg中
        //追加到聊天记录中
        ui->msgBrowser->setTextColor(Qt::blue);
        ui->msgBrowser->append("["+ userName +"]"+time);
        ui->msgBrowser->append(msg);
        break;
    case UsrEnter:
        //更新右侧的文本
        stream>>userName;
        usrEnter(userName);
        break;
    case Usrleft:
        stream>>userName;
        usrLeft(userName,time);
        break;
    default:
        break;
    }
}

void dialog::on_pushButton_8_clicked()
{
    this->close();
}
