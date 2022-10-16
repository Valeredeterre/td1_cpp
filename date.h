#pragma once

#include "time.h"
#include <string>
#include <iostream>

class Date
{
public:
    Date(int month = 1, int day = 1, int year = 2000);
    std::string get_date();
private:
    bool is_valid(int month, int day, int year);
    int _year;
    int _month;
    int _day;
};