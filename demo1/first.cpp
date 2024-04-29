#include "first.h"
#include "ui_first.h"
#include "admin.h"

First::First(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::First)
{
    ui->setupUi(this);
}

First::~First()
{
    delete ui;
}


void First::on_pushButton_SignUP_clicked()
{

    ui->label_EmptyDataError->setText("");
    ui->label_UserNameError->setText("");
    ui->label_PhoneNumberError->setText("");
    ui->label_PasswordError->setText("");
    ui->label_PinError->setText("");
    ui->label_ConfirmPasswordError->setText("");
    ui->label_ConfirmPinError->setText("");

    QString userName=ui->lineEdit_UserName->text();
    QString email=ui->lineEdit_Email->text();
    QString phone=ui->lineEdit_Phone->text();
    QString password=ui->lineEdit_Password->text();
    QString confirmPassword=ui->lineEdit_confirmPass->text();
    QString pin=ui->lineEdit_Pin->text();
    QString confirmPin=ui->lineEdit_ConfirmPin->text();
    if(userName==""||email==""||phone==""||password==""||confirmPassword==""||pin==""||confirmPin=="")
    {
        ui->label_EmptyDataError->setText("There are empty fields please,compelete all data");
    }
    else
    {
        if(userName=="Ahmed123")
        {
            ui->label_UserNameError->setText("This username is aldready exist please,try again");
        }
        else if(phone=="01112343263")
        {
            ui->label_PhoneNumberError->setText("This phone number is aldready exist please,try again");
        }
        else if(password.length()<8)
        {
            ui->label_PasswordError->setText("This password is too week please,try again");
        }
        else if(pin.length()<6)
        {
            ui->label_PinError->setText("This pin is too short please,try again");
        }
        else if(password!=confirmPassword)
        {
            ui->label_ConfirmPasswordError->setText("confirmation password isn't correct please,try again");
        }
        else if(pin!=confirmPin)
        {
            ui->label_ConfirmPinError->setText("confirmation pin isn't correct please,try again");
        }
        else
        {
            // this->hide();
            // USERADDING u;
            // u.setModal(true);
            // u.exec();
            ui->stackedWidget->setCurrentIndex(2);

            ui->label_EmptyDataError->setText("done");
        }
    }
}



void First::on_dateEdit_userDateChanged(const QDate &date)
{
    qDebug() <<date.day();
}


void First::on_pushButton_BackToLogin_clicked()
{
    // ADMIN ad2;
    //ad1.dis();
    ui->stackedWidget->setCurrentIndex(7);
}


void First::on_pushButton_94_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void First::on_pushButton_93_clicked()
{
    QString us1=ui->lineEdit_4->text();
    QString pas=ui->lineEdit_5->text();


    if(us1=="Ahmed"&&pas=="maysoon")
    {
        ui->stackedWidget->setCurrentIndex(4);
    }
    else
    {
        ui->label_81->setText("failed to sign in");
    }
}

