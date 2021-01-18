#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QToolButton>
#include "dialog.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QVector<QToolButton*>btns;

    QList<QString> list;
    list<<"Lia"<<"kana"<<"Dolphin"<<"Momoka"<<"MJ"<<"Jmin"<<"L_molo"<<"Mitsue"<<"Edith"<<"Miku";
    QStringList iconNames;
    iconNames<<"a01.jfif"<<"a02.jfif"<<"a03.jfif"<<"a04.jpg"<<"a05.jfif"<<"a06.jfif"<<"a07.jfif"<<"a08.png"<<"a11.jfif"<<"a12.jfif";
    for(int i=0;i<10;++i)
    {
        QToolButton *btn=new QToolButton;
        btn->setText(list.at(i));
        btn->setIcon(QPixmap(":/img/header/"+iconNames.at(i)));
        btn->setIconSize(QPixmap(":/img/header/a01.jfif").size());
        btn->setAutoRaise(true);
        btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        ui->toolBox->addItem(btn,list.at(i));
        btns.push_back(btn);
        isshow.push_back(false);
    }

    for(int i=0;i<btns.size();i++)
    {
        connect(btns[i],&QToolButton::clicked,[=](){
            if(isshow.at(i)==false)
            {
                dialog *d=new dialog(0,btns.at(i)->text());
                d->setWindowTitle(btns[i]->text());
                d->setWindowIcon(btns[i]->icon());
                d->resize(880,620);
                d->show();
                isshow[i]=true;
                connect(d,&dialog::closewidge,[=](){
                    isshow[i]=false;
                });
            }
        });
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

