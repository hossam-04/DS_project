#ifndef CARD_H
#define CARD_H

#include<iostream>
#include<string>

using namespace std;


class Card
{
public:
    string card_number;
    string card_holder_name;
    int card_ATM_pin;
    int card_balance;

    Card();
};



#endif // CARD_H
