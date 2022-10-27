#include "transaction.h"

Transaction::Transaction(temporality::Date date, float amount,  Account& sender,  Account& receiver, bool state, std::string description) : _sender(sender), _receiver(receiver)
{
    _date = date;
    temporality::Hour _hour;
    _amount = amount;
    _state = state;
    _description = description;
}

std::string Transaction::get_transaction()
{
    std::string date = _date.get_date();
    std::string hour = _hour.get_hour();
    std::string amount = std::to_string(_amount);
    std::string sender = std::to_string(_sender.get_account_number());
    std::string receiver = std::to_string(_receiver.get_account_number());
    std::string state;
    if (_state == true)
    {
        state = "Success";
    }
    else
    {
        state = "Failed";
    }
    std::string description = _description;

    std::string transaction = 
        "Date : " + date + "\n" + 
        "Hour : " + hour + "\n" + 
        "Amount : " + amount + " €\n" + 
        "Sender : " + sender + "\n" + 
        "Receiver : " + receiver + "\n" + 
        "State : " + state + "\n" + 
        "Description : " + description + "\n";
    return transaction;
}