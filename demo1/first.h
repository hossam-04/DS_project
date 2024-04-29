#ifndef FIRST_H
#define FIRST_H

#include <QMainWindow>
#include "admin.h"

namespace Ui {
class First;
}

class First : public QMainWindow
{
    Q_OBJECT

public:
    explicit First(QWidget *parent = nullptr);
    Admin ad1;
    ~First();

private slots:
    void on_pushButton_SignUP_clicked();

    void on_dateEdit_userDateChanged(const QDate &date);

    void on_pushButton_BackToLogin_clicked();

    void on_pushButton_94_clicked();

    void on_pushButton_93_clicked();

private:
    Ui::First *ui;
};

#endif // FIRST_H
