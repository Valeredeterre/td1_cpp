#pragma once

#include <string>
#include <iostream>
#include "date.h"
#include "heure.h"
#include "account.h"
#include "adress.h"

class Account;

class Transaction
{
public:
    Transaction(temporality::Date date, float amount,  Account& sender,  Account& receiver, bool state, std::string description);
    std::string get_transaction();
private:
    temporality::Date _date;
    temporality::Hour _hour;
    float _amount;
    Account& _sender;
    Account& _receiver;
    bool _state;
    std::string _description;
};