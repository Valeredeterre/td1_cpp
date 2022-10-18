#include "date.h"

temporality::Date::Date(int m, int d, int y)
{
    if(is_valid(m, d, y))
    {
        _month = m;
        _day = d;
        _year = y;
    }
    else
    {
        std::cout << "Invalid date. Date set to the current date" << std::endl;

        time_t ttime = time(0);
        tm *local_time = localtime(&ttime);
    
        _year = 1900 + local_time->tm_year;
        _month = 1 + local_time->tm_mon;
        _day = local_time->tm_mday;
    }
}

temporality::Date::Date()
{
        time_t ttime = time(0);
        tm *local_time = localtime(&ttime);
    
        _year = 1900 + local_time->tm_year;
        _month = 1 + local_time->tm_mon;
        _day = local_time->tm_mday;
}

std::string temporality::Date::get_date()
{
    std::string year = std::to_string(_year);
    std::string month = std::to_string(_month);
    std::string day = std::to_string(_day);

    std::string date = month + "/" + day + "/" + year;

    return date;
}

bool temporality::Date::is_valid(int m, int d, int y)
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