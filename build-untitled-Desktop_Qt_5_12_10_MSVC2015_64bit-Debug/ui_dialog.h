/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialog
{
public:
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QTextBrowser *msgBrowser;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontComboBox;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QTextEdit *msgTextEdit;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendBtn;
    QSpacerItem *horizontalSpacer_3;
    QLabel *usrNumber;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_8;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *usrtable;

    void setupUi(QWidget *dialog)
    {
        if (dialog->objectName().isEmpty())
            dialog->setObjectName(QString::fromUtf8("dialog"));
        dialog->resize(1237, 1007);
        horizontalLayout_4 = new QHBoxLayout(dialog);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        widget_3 = new QWidget(dialog);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        msgBrowser = new QTextBrowser(widget_3);
        msgBrowser->setObjectName(QString::fromUtf8("msgBrowser"));

        verticalLayout->addWidget(msgBrowser);

        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fontComboBox = new QFontComboBox(widget);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));
        fontComboBox->setMinimumSize(QSize(200, 40));

        horizontalLayout->addWidget(fontComboBox);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(60, 40));

        horizontalLayout->addWidget(comboBox);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButton_6);


        verticalLayout->addWidget(widget);

        msgTextEdit = new QTextEdit(widget_3);
        msgTextEdit->setObjectName(QString::fromUtf8("msgTextEdit"));

        verticalLayout->addWidget(msgTextEdit);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        sendBtn = new QPushButton(widget_4);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));
        sendBtn->setMinimumSize(QSize(80, 40));

        horizontalLayout_3->addWidget(sendBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        usrNumber = new QLabel(widget_4);
        usrNumber->setObjectName(QString::fromUtf8("usrNumber"));

        horizontalLayout_3->addWidget(usrNumber);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        pushButton_8 = new QPushButton(widget_4);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(80, 40));

        horizontalLayout_3->addWidget(pushButton_8);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_4);


        horizontalLayout_4->addWidget(widget_3);

        widget_2 = new QWidget(dialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(280, 0));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        usrtable = new QTableWidget(widget_2);
        if (usrtable->columnCount() < 1)
            usrtable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        usrtable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        usrtable->setObjectName(QString::fromUtf8("usrtable"));
        usrtable->setSelectionMode(QAbstractItemView::SingleSelection);
        usrtable->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_2->addWidget(usrtable);


        horizontalLayout_4->addWidget(widget_2);


        retranslateUi(dialog);

        QMetaObject::connectSlotsByName(dialog);
    } // setupUi

    void retranslateUi(QWidget *dialog)
    {
        dialog->setWindowTitle(QApplication::translate("dialog", "Form", nullptr));
        comboBox->setItemText(0, QApplication::translate("dialog", "14", nullptr));
        comboBox->setItemText(1, QApplication::translate("dialog", "9", nullptr));
        comboBox->setItemText(2, QApplication::translate("dialog", "14", nullptr));
        comboBox->setItemText(3, QApplication::translate("dialog", "11", nullptr));
        comboBox->setItemText(4, QApplication::translate("dialog", "12", nullptr));
        comboBox->setItemText(5, QApplication::translate("dialog", "13", nullptr));
        comboBox->setItemText(6, QApplication::translate("dialog", "14", nullptr));
        comboBox->setItemText(7, QApplication::translate("dialog", "16", nullptr));
        comboBox->setItemText(8, QApplication::translate("dialog", "20", nullptr));

        pushButton->setText(QApplication::translate("dialog", "\345\212\240\347\262\227", nullptr));
        pushButton_2->setText(QApplication::translate("dialog", "\346\226\234\344\275\223", nullptr));
        pushButton_3->setText(QApplication::translate("dialog", "\344\270\213\345\210\222\347\272\277", nullptr));
        pushButton_4->setText(QApplication::translate("dialog", "\351\242\234\350\211\262", nullptr));
        pushButton_5->setText(QApplication::translate("dialog", "\344\277\235\345\255\230", nullptr));
        pushButton_6->setText(QApplication::translate("dialog", "\346\270\205\347\251\272", nullptr));
        sendBtn->setText(QApplication::translate("dialog", "\345\217\221\351\200\201", nullptr));
        usrNumber->setText(QApplication::translate("dialog", "\345\234\250\347\272\277\344\272\272\346\225\260\357\274\2320\344\272\272", nullptr));
        pushButton_8->setText(QApplication::translate("dialog", "\351\200\200\345\207\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = usrtable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("dialog", "\347\224\250\346\210\267\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialog: public Ui_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
