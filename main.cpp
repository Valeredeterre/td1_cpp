#include <iostream>
#include "heure.h"
#include "date.h"
#include "adress.h"
#include "client.h"
#include "transaction.h"
#include "account.h"

int higher_account_number(std::vector<Account> accountList)
{
    int higher = 0;
    for (long unsigned int i = 0; i < accountList.size(); i++)
    {
        if (accountList[i].get_account_number() > higher)
        {
            higher = accountList[i].get_account_number();
        }
    }
    return higher;
}

int main()
{
    Hour hour;
    std::cout << "Current Time : " << hour.get_hour() << std::endl << std::endl;


    std::vector<Account> accountList;
    Date D1(2,12,2000);

    Client c1("Valere", "Dumont", Adress(15, "rue de la porte de Bessey", "Beze", 21310, "France"), Date(12, 16, 2002), "dumontvalere.vrd@gmail.com", "06 45 83 08 31");
    Client c2("Paulin", "Valaye", Adress(24, "avn Alain Savary", "dijon", 213130, "France"), Date(9, 26, 2002), "blablabla", "1234567890");
    Client c3("Etienne", "Doussot", Adress(24, "avn Alain Savary", "dijon", 21000, "France"), Date(4, 23, 2002), "blablabla", "1234567890");

    Account a1(c1, 100, higher_account_number(accountList), D1);
    accountList.push_back(a1);
    Account a2(c2, 100, higher_account_number(accountList), D1);
    accountList.push_back(a2);
    Account a3(c3, 100, higher_account_number(accountList), D1);
    accountList.push_back(a3);

    accountList[0].send_money(50, accountList[1]);
    accountList[0].add_balance(2000);

    for
    (long unsigned int i = 0; i < accountList.size(); i++)
    {
        std::cout << accountList[i].get_account() << std::endl;
    }

    std::cout << accountList[0].get_transactions_history() << std::endl;

    return EXIT_SUCCESS;
}