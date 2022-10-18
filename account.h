#pragma once
#include "client.h"
#include "transaction.h"
#include <vector>
#include <limits>



class Transaction;


class Account
{
    public:
        Account(Client client = Client(), float balance = 1000, int accountNumber = -1, temporality::Date openingDate = temporality::Date(1,1,1345));
        std::string get_account();
        std::string get_transactions_history();
        void add_balance(float amount);
        void send_money(float amount, Account& account);
        void withdraw_money(float amount);
        void deposit_money(float ammount);
        void freeze_balance(bool state);
        int get_account_number();
    private:
        void add_transaction(Transaction transaction);
        Client _client;
        float _balance;
        int _accountNumber;
        temporality::Date _openingDate;
        bool _state;
        std::vector<Transaction> _transactionsHystory;
};
