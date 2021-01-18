#ifndef DIALOG_H
#define DIALOG_H
#include<QUdpSocket>
#include <QWidget>
enum MsgType
{
    Msg,
    UsrEnter,
    Usrleft
};

namespace Ui {
class dialog;
}

class dialog : public QWidget
{
    Q_OBJECT

public:
    explicit dialog(QWidget *parent,QString name);
    ~dialog();
    void closeEvent(QCloseEvent *event);
private:
    Ui::dialog *ui;

    signals:
    void closewidge();

public:
    void sndMsg(MsgType type);
    void usrEnter(QString userName);
    void usrLeft(QString usrName,QString time);
    QString getUsr();
    QString getMsg();
private slots:
    void on_pushButton_8_clicked();

private:
    QUdpSocket *udpSocket;
    qint16 port;
    QString uName;

    void Receivemessage();


};

#endif // DIALOG_H
