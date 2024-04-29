#ifndef User_H
#define User_H


#include <iostream>
#include<stack>
#include<vector>
#include<list>
#include"Transaction.h"
#include"Card.h"
#include"Message.h"
using namespace std;
struct Date
{
    int day=0;
    int month=0;
    int year=0;
};
class User
{
public:
    //user information
    int Pin;
    string user_name;
    string password;
    string email;
    Date birth_date;
    string phone_number;
    string address_account;
    string status;

    //datastructure that related to the user
    stack<Transaction>transactions;
    vector<Card>cards;
    list<Message>messages;


    User();
    User(string user_name, string password, Date birth_date, string email, string phone_number, int pin);

    //string HasingPass(string password);

};



#endif // USER_H
