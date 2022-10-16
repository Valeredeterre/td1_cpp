#include "adress.h"

Adress::Adress(int streetNumber, std::string streetName, std::string city, int zipNumber, std::string country)
{
    if(streetNumber < 0)
        _streetNumber = 1;
    else
        _streetNumber = streetNumber;

    _streetName = streetName;
    _city = city;

    if(zipNumber < 0 || zipNumber > 99999)
        _zipNumber = 75000;
    else
        _zipNumber = zipNumber;

    _country = country;
}

void Adress::set_adress(int streetNumber, std::string streetName, std::string city, int zipNumber, std::string country)
{
    if(streetNumber < 0)
        _streetNumber = 1;
    else
        _streetNumber = streetNumber;

    _streetName = streetName;
    _city = city;

    if(zipNumber < 0 || zipNumber > 99999)
        _zipNumber = 75000;
    else
        _zipNumber = zipNumber;

    _country = country;
} 

std::string Adress::get_adress()
{
    std::string streetNumber = std::to_string(_streetNumber);
    std::string zipNumber = std::to_string(_zipNumber);

    std::string adress = streetNumber + " " + _streetName + ", " + _city + ", " + zipNumber + ", " + _country;

    return adress;
}