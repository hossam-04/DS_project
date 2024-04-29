/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddUser
{
public:
    QWidget *centralwidget;
    QLabel *label_11;
    QFrame *frame;
    QLineEdit *lineEdit_UserName;
    QLineEdit *lineEdit_Email;
    QLineEdit *lineEdit_Phone;
    QLineEdit *lineEdit_Password;
    QLineEdit *lineEdit_confirmPass;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_UserNameError;
    QLabel *label_PhoneNumberError;
    QLabel *label_ConfirmPasswordError;
    QLabel *label_PasswordError;
    QFrame *frame_2;
    QLineEdit *lineEdit_Pin;
    QLineEdit *lineEdit_ConfirmPin;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_ConfirmPinError;
    QLabel *label_DateError;
    QDateEdit *dateEdit;
    QFrame *frame_3;
    QPushButton *pushButton_SignUP;
    QLabel *label_EmptyDataError;
    QPushButton *pushButton_SignUP_2;
    QLabel *label_9;
    QLabel *label_PinError;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddUser)
    {
        if (AddUser->objectName().isEmpty())
            AddUser->setObjectName("AddUser");
        AddUser->resize(1620, 780);
        AddUser->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 31, 31);"));
        centralwidget = new QWidget(AddUser);
        centralwidget->setObjectName("centralwidget");
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 20, 211, 51));
        label_11->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(85, 255, 127);\n"
"background-image: url(:/IMG/Screenshot 2024-04-21 144020.png);\n"
""));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/IMG/Screenshot 2024-04-21 144020.png")));
        label_11->setScaledContents(true);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(40, 140, 511, 501));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit_UserName = new QLineEdit(frame);
        lineEdit_UserName->setObjectName("lineEdit_UserName");
        lineEdit_UserName->setGeometry(QRect(210, 30, 271, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(18);
        font.setBold(true);
        lineEdit_UserName->setFont(font);
        lineEdit_UserName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-color: rgb(255, 85, 255);\n"
"	background-color: rgb(59, 59, 59);\n"
"	border-radius:50px;\n"
"	margin:100px 5px ;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        lineEdit_Email = new QLineEdit(frame);
        lineEdit_Email->setObjectName("lineEdit_Email");
        lineEdit_Email->setGeometry(QRect(210, 130, 271, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(13);
        font1.setBold(true);
        lineEdit_Email->setFont(font1);
        lineEdit_Email->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-color: rgb(255, 85, 255);\n"
"	background-color: rgb(59, 59, 59);\n"
"	border-radius:50px;\n"
"	margin:100px 5px ;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        lineEdit_Phone = new QLineEdit(frame);
        lineEdit_Phone->setObjectName("lineEdit_Phone");
        lineEdit_Phone->setGeometry(QRect(210, 240, 271, 51));
        lineEdit_Phone->setFont(font);
        lineEdit_Phone->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-color: rgb(255, 85, 255);\n"
"	background-color: rgb(59, 59, 59);\n"
"	border-radius:50px;\n"
"	margin:100px 5px ;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        lineEdit_Password = new QLineEdit(frame);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setGeometry(QRect(210, 330, 271, 51));
        lineEdit_Password->setFont(font);
        lineEdit_Password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-color: rgb(255, 85, 255);\n"
"	background-color: rgb(59, 59, 59);\n"
"	border-radius:50px;\n"
"	margin:100px 5px ;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        lineEdit_Password->setCursorMoveStyle(Qt::VisualMoveStyle);
        lineEdit_confirmPass = new QLineEdit(frame);
        lineEdit_confirmPass->setObjectName("lineEdit_confirmPass");
        lineEdit_confirmPass->setGeometry(QRect(210, 430, 271, 51));
        lineEdit_confirmPass->setFont(font);
        lineEdit_confirmPass->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-color: rgb(255, 85, 255);\n"
"	background-color: rgb(59, 59, 59);\n"
"	border-radius:50px;\n"
"	margin:100px 5px ;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        lineEdit_confirmPass->setEchoMode(QLineEdit::Password);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 30, 111, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 130, 111, 41));
        QFont font3;
        font3.setPointSize(16);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 240, 171, 41));
        QFont font4;
        font4.setPointSize(14);
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 330, 131, 41));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 430, 161, 51));
        QFont font5;
        font5.setPointSize(12);
        label_5->setFont(font5);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_UserNameError = new QLabel(frame);
        label_UserNameError->setObjectName("label_UserNameError");
        label_UserNameError->setGeometry(QRect(220, 0, 301, 31));
        label_UserNameError->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_PhoneNumberError = new QLabel(frame);
        label_PhoneNumberError->setObjectName("label_PhoneNumberError");
        label_PhoneNumberError->setGeometry(QRect(220, 200, 301, 31));
        label_PhoneNumberError->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_ConfirmPasswordError = new QLabel(frame);
        label_ConfirmPasswordError->setObjectName("label_ConfirmPasswordError");
        label_ConfirmPasswordError->setGeometry(QRect(220, 400, 301, 31));
        label_ConfirmPasswordError->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_PasswordError = new QLabel(frame);
        label_PasswordError->setObjectName("label_PasswordError");
        label_PasswordError->setGeometry(QRect(220, 300, 301, 31));
        label_PasswordError->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(680, 140, 511, 321));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lineEdit_Pin = new QLineEdit(frame_2);
        lineEdit_Pin->setObjectName("lineEdit_Pin");
        lineEdit_Pin->setGeometry(QRect(220, 30, 271, 51));
        lineEdit_Pin->setFont(font);
        lineEdit_Pin->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-color: rgb(255, 85, 255);\n"
"	background-color: rgb(59, 59, 59);\n"
"	border-radius:50px;\n"
"	margin:100px 5px ;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        lineEdit_ConfirmPin = new QLineEdit(frame_2);
        lineEdit_ConfirmPin->setObjectName("lineEdit_ConfirmPin");
        lineEdit_ConfirmPin->setGeometry(QRect(220, 140, 271, 51));
        lineEdit_ConfirmPin->setFont(font);
        lineEdit_ConfirmPin->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-color: rgb(255, 85, 255);\n"
"	background-color: rgb(59, 59, 59);\n"
"	border-radius:50px;\n"
"	margin:100px 5px ;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 30, 71, 41));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 140, 181, 41));
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(40, 250, 161, 41));
        QFont font6;
        font6.setPointSize(18);
        label_8->setFont(font6);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_ConfirmPinError = new QLabel(frame_2);
        label_ConfirmPinError->setObjectName("label_ConfirmPinError");
        label_ConfirmPinError->setGeometry(QRect(230, 100, 301, 31));
        label_ConfirmPinError->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_DateError = new QLabel(frame_2);
        label_DateError->setObjectName("label_DateError");
        label_DateError->setGeometry(QRect(230, 210, 301, 31));
        label_DateError->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        dateEdit = new QDateEdit(frame_2);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(230, 250, 241, 51));
        QFont font7;
        font7.setPointSize(28);
        font7.setBold(true);
        dateEdit->setFont(font7);
        dateEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        dateEdit->setMaximumDateTime(QDateTime(QDate(2010, 12, 31), QTime(23, 59, 59)));
        dateEdit->setMinimumDateTime(QDateTime(QDate(1899, 12, 31), QTime(0, 0, 0)));
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(700, 500, 481, 141));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        pushButton_SignUP = new QPushButton(frame_3);
        pushButton_SignUP->setObjectName("pushButton_SignUP");
        pushButton_SignUP->setGeometry(QRect(290, 50, 161, 51));
        pushButton_SignUP->setFont(font3);
        pushButton_SignUP->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"	background-color: rgb(255, 0, 255);\n"
"}\n"
"QPushButton{\n"
"background-color: rgb(119, 103, 228);\n"
"border-radius:20px;\n"
"}"));
        label_EmptyDataError = new QLabel(frame_3);
        label_EmptyDataError->setObjectName("label_EmptyDataError");
        label_EmptyDataError->setGeometry(QRect(210, 10, 301, 31));
        label_EmptyDataError->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        pushButton_SignUP_2 = new QPushButton(frame_3);
        pushButton_SignUP_2->setObjectName("pushButton_SignUP_2");
        pushButton_SignUP_2->setGeometry(QRect(60, 50, 161, 51));
        pushButton_SignUP_2->setFont(font3);
        pushButton_SignUP_2->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"	background-color: rgb(255, 0, 255);\n"
"}\n"
"QPushButton{\n"
"background-color: rgb(119, 103, 228);\n"
"border-radius:20px;\n"
"}"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(440, 70, 281, 51));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Arial Black")});
        font8.setPointSize(18);
        font8.setBold(true);
        label_9->setFont(font8);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_PinError = new QLabel(centralwidget);
        label_PinError->setObjectName("label_PinError");
        label_PinError->setGeometry(QRect(920, 130, 301, 31));
        label_PinError->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        AddUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AddUser);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1620, 26));
        AddUser->setMenuBar(menubar);
        statusbar = new QStatusBar(AddUser);
        statusbar->setObjectName("statusbar");
        AddUser->setStatusBar(statusbar);

        retranslateUi(AddUser);

        QMetaObject::connectSlotsByName(AddUser);
    } // setupUi

    void retranslateUi(QMainWindow *AddUser)
    {
        AddUser->setWindowTitle(QCoreApplication::translate("AddUser", "MainWindow", nullptr));
        label_11->setText(QString());
        label->setText(QCoreApplication::translate("AddUser", "UserName", nullptr));
        label_2->setText(QCoreApplication::translate("AddUser", "E-mail", nullptr));
        label_3->setText(QCoreApplication::translate("AddUser", "Phone_Number", nullptr));
        label_4->setText(QCoreApplication::translate("AddUser", "password", nullptr));
        label_5->setText(QCoreApplication::translate("AddUser", "confirm_password", nullptr));
        label_UserNameError->setText(QString());
        label_PhoneNumberError->setText(QString());
        label_ConfirmPasswordError->setText(QString());
        label_PasswordError->setText(QString());
        label_6->setText(QCoreApplication::translate("AddUser", "pin", nullptr));
        label_7->setText(QCoreApplication::translate("AddUser", "confirm_pin", nullptr));
        label_8->setText(QCoreApplication::translate("AddUser", "Birth Date", nullptr));
        label_ConfirmPinError->setText(QString());
        label_DateError->setText(QString());
        dateEdit->setDisplayFormat(QCoreApplication::translate("AddUser", "d/M/yyyy", nullptr));
        pushButton_SignUP->setText(QCoreApplication::translate("AddUser", "Sign up", nullptr));
        label_EmptyDataError->setText(QString());
        pushButton_SignUP_2->setText(QCoreApplication::translate("AddUser", "Cancel", nullptr));
        label_9->setText(QCoreApplication::translate("AddUser", "ADD NEW USER", nullptr));
        label_PinError->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddUser: public Ui_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
