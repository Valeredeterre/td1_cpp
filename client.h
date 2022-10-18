#pragma once

#include "adress.h"
#include "date.h"

class Client
{
public:
    Client(std::string name, std::string surname, Adress adress, temporality::Date birthdate, std::string email, std::string phone);
    Client();
    std::string get_client();
    std::string get_client_name();
    std::string get_client_short();


private:
    std::string _name;
    std::string _surname;
    std::string _email;
    std::string _phone;
    Adress _adress;
    temporality::Date _birthdate;
};
