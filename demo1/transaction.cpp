#include "transaction.h"

Transaction::Transaction()
{
    this->from = "-----";
    this->to = "-----";
    this->status = "-----";
    this->kind = "-----";
    this->amount= 0;
}
