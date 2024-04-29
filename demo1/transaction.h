#ifndef TRANSACTION_H
#define TRANSACTION_H

#include<iostream>
#include<string>

using namespace std;

struct TrasactionDate
{
    int day=0;
    int month=0;
    int year=0;
};

class Transaction
{
public:
    string from;
    string to;
    TrasactionDate date;
    string status;
    string kind;
    int amount;

    Transaction();
};

#endif // TRANSACTION_H
