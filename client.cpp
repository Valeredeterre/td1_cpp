#include "client.h"

Client::Client(std::string name, std::string surname, Adress adress, temporality::Date birthdate, std::string email, std::string phone)
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
    _name = "New";
    _surname = "Bank";
    _adress = Adress(1, "rue de la banque", "Zurick", 12345, "Suisse");
    _birthdate = temporality::Date(10,13,2022);
    _email = "bank.new@bank.com";
}

std::string Client::get_client()
{
    std::string client = _name + " " + _surname + ", " + _adress.get_adress() + ", " + _birthdate.get_date() + ", " + _email + ", " + _phone;
    return client;
}

std::string Client::get_client_name()
{
    std::string name = _name + " " + _surname;
    return name;
}

std::string Client::get_client_short()
{
    std::string name = _name + " " + _surname;
    return name;
}
