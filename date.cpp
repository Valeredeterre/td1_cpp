#include "date.h"

Date::Date(int m, int d, int y)
{
    if(is_valid(m, d, y))
    {
        _month = m;
        _day = d;
        _year = y;
    }
    else
    {
        _month = 1;
        _day = 1;
        _year = 2000;
        std::cout << "Invalid date. Date set to 1/1/2000" << std::endl;
    }
}

std::string Date::get_date()
{
    std::string year = std::to_string(_year);
    std::string month = std::to_string(_month);
    std::string day = std::to_string(_day);

    std::string date = month + "/" + day + "/" + year;

    return date;
}

bool Date::is_valid(int m, int d, int y)
{
    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (y % 4 == 0)
    {
        days_in_month[1] = 29;
    }
    if (m < 1 || m > 12)
    {
        return false;
    }
    if (d < 1 || d > days_in_month[m - 1])
    {
        return false;
    }
    return true;
}