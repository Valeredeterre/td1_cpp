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

    temporality::Hour hour;
    temporality::Date date;
    std::cout << "Current time : " << hour.get_hour() << std::endl;
    std::cout << "Current Date : " << date.get_date() << std::endl << std::endl;

    std::vector<Account> accountList;

    Client c0;
    Client c1("Valere", "Dumont", Adress(15, "rue de la porte de Bessey", "Beze", 21310, "France"), temporality::Date(12, 16, 2002), "dumontvalere.vrd@gmail.com", "06 45 83 08 31");
    Client c2("Paulin", "Valaye", Adress(24, "avn Alain Savary", "dijon", 21000, "France"), temporality::Date(9, 26, 2002), "blablabla", "1234567890");
    Client c3("Etienne", "Doussot", Adress(24, "avn Alain Savary", "dijon", 21000, "France"), temporality::Date(4, 23, 2002), "blablabla", "1234567890");
    Client c4("Aubin","Septier", Adress(9, "avn Alain Savary", "Dijon", 21000, "France"), temporality::Date(03, 18, 2002), "blablabla", "1234567890");
    Client c5("Alexandre", "Tavernier", Adress(5, "rue du Transvaal", "Dijon", 21000, "France" ), temporality::Date(05, 30, 2002), "blablabla", "1234567890");

    Account a0(c0, 100, 0, date);
    accountList.push_back(a0);
    Account a1(c1, 100, higher_account_number(accountList)+1, date);
    accountList.push_back(a1);
    Account a2(c2, 100, higher_account_number(accountList)+1, temporality::Date(10, 16, 2022));
    accountList.push_back(a2);
    Account a3(c3, 100, higher_account_number(accountList)+1, temporality::Date(10, 16, 2022));
    accountList.push_back(a3);
    Account a4(c1, 1000, higher_account_number(accountList)+1, temporality::Date(10, 16, 2022));
    accountList.push_back(a4);
    Account a5(c4, 2000000, higher_account_number(accountList)+1, temporality::Date(10, 17, 2022));
    accountList.push_back(a5);



    accountList[1].send_money(50, accountList[2]);
    accountList[1].deposit_money(50, accountList[0]);
    accountList[5].send_money(1999999, accountList[2]);

    std::cout << "----------------------------------------" << std::endl;
    std::cout << "----------- list of accounts -----------"<< std::endl;
    std::cout << "----------------------------------------"<< std::endl << std::endl;

    


    for
    (long unsigned int i = 0; i < accountList.size(); i++)
    {
        std::cout << accountList[i].get_account() << std::endl;
    }

    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "---------- list of transactions ---------"<< std::endl;
    std::cout << "-----------------------------------------"<< std::endl << std::endl;

    for
    (long unsigned int i = 0; i < accountList.size(); i++)
    {
        std::cout << accountList[i].get_transactions_history() << std::endl;
    }


    return EXIT_SUCCESS;
}