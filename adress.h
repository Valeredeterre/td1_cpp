#pragma once

#include <iostream>
#include <string>

class Adress
{
    public:
        Adress(int streetNumber = 1, std::string streetName = "rue de la paix", std::string city = "Paris", int zipNumber = 75000, std::string country = "France");
        void set_adress(int streetNumber, std::string streetName, std::string city, int zipNumber, std::string country);
        std::string get_adress();

    private:
        int _streetNumber;
        std::string _streetName;
        std::string _city;
        int _zipNumber;
        std::string _country;
};