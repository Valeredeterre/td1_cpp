#include "client.h"

Client::Client(std::string name, std::string surname, Adress adress, Date birthdate, std::string email, std::string phone)
{
    _name = name;
    _surname = surname;
    _adress = adress;
    _birthdate = birthdate;
    _email = email;
    _phone = phone;
}

Client::Client()
{
    _name = "John";
    _surname = "Doe";
    _adress = Adress();
    _birthdate = Date();
    _email = "John.Doe@yopmail.com";
}