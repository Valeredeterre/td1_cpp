#include "date.h"

Date::Date(int m, int d, int y)
{
    _month = m;
    _day = d;
    _year = y;
}

std::string Date::get_date()
{
    std::string year = std::to_string(_year);
    std::string month = std::to_string(_month);
    std::string day = std::to_string(_day);

    std::string date = month + "/" + day + "/" + year;

    return date;
}