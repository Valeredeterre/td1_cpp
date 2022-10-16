#include "account.h"
 
Account::Account(Client client, float balance, int accountNumber, Date openingDate)
{
    _client = client;
    _balance = balance;
    _accountNumber = accountNumber;
    _openingDate = openingDate;
    _state = false;
}

std::string Account::get_account()
{
    std::string client = _client.get_client();
    std::string balance = std::to_string(_balance);
    std::string accountNumber = std::to_string(_accountNumber);
    std::string openingDate = _openingDate.get_date();
    std::string state;
    if (_state != true)
    {
        state = "Active";
    }
    else
    {
        state = "Frozen";
    }
    std::string accountData = "Client : " + client + "\n" + "Balance : " + balance + "\n" + "Account Number : " + accountNumber + "\n" + "Opening Date : " + openingDate + "\n" + "State : " + state + "\n";
    return accountData;
}

std::string Account::get_transactions_history()
{
    std::string transactionsHistory;
    for (long unsigned int i = 0; i < _transactionsHystory.size(); i++)
    {
        transactionsHistory += _transactionsHystory[i].get_transaction();
        transactionsHistory += "\n";
    }
    return transactionsHistory;
}

void Account::add_transaction(Transaction transaction)
{
    _transactionsHystory.push_back(transaction);
}

int Account::get_account_number()
{
    return _accountNumber;
}

void Account::add_balance(float amount)
{
    _balance += amount;
    this->freeze_balance(false);
    this->add_transaction(Transaction(Date(1, 1, 2020), amount, _client, true, "Add balance"));
}

void Account::send_money(float amount, Account& account)
{
    if(_balance - amount >= 0)
    {
        _balance -= amount;
        account.add_balance(amount);
        this->add_transaction(Transaction(Date(1, 1, 2020), amount, _client, account._client, true, "Money sent"));
    }
    else
    {
        this->freeze_balance(true);
        this->add_transaction(Transaction(Date(1, 1, 2020), amount, _client, account._client, false, "Money sent"));
    }
}

void Account::withdraw_money(float amount)
{
    if(_balance - amount >= 0)
    {
        _balance -= amount;
        this->add_transaction(Transaction(Date(1, 1, 2020), amount, _client, true, "Money withdrawn"));
    }
    else
    {
        this->freeze_balance(true);
        this->add_transaction(Transaction(Date(1, 1, 2020), amount, _client, false, "Money withdrawn"));
    }
}

void Account::freeze_balance(bool state)
{
    _state = state;
}