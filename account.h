#pragma once
#include "client.h"
#include "transaction.h"
#include <vector>

class Account
{
    public:
        Account(Client client, float balance, int accountNumber, Date openingDate);
        std::string get_account();
        std::string get_transactions_history();
        void add_balance(float amount);
        void send_money(float amount, Account& account);
        void withdraw_money(float amount);
        void freeze_balance(bool state);
        int get_account_number();
    private:
        void add_transaction(Transaction transaction);
        Client _client;
        float _balance;
        int _accountNumber;
        Date _openingDate;
        bool _state;
        std::vector<Transaction> _transactionsHystory;
};
