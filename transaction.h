#pragma once

#include <string>
#include <iostream>
#include "date.h"
#include "heure.h"
#include "client.h"
#include "adress.h"

class Transaction
{
public:
    Transaction(Date date, float amount, Client sender, Client receiver, bool state, std::string description);
    Transaction(Date date, float amount, Client sender, bool state, std::string description);

    std::string get_transaction();
private:
    Date _date;
    Hour _hour;
    float _amount;
    Client _sender;
    Client _receiver;
    bool _state;
    std::string _description;
};