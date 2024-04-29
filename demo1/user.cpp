#include "user.h"

User::User(string user_name, string password, Date birth_date, string email, string phone_number, int pin)
{
    this->user_name = user_name;
    this->password = password;
    this->birth_date = birth_date;
    this->email = email;
    this->phone_number = phone_number;
    this->Pin = pin;
}

User::User()
{
    this->user_name ="";
    this->password = "";
    this->birth_date.day = 0;
    this->birth_date.month = 4;
    this->birth_date.year = 0;
    this->email = "";
    this->phone_number = "";
    this->Pin = 000000;
}
