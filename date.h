#pragma once

#include "time.h"
#include <string>
#include <iostream>

namespace temporality{class Date
{
public:
    Date(int month, int day, int year);
    Date();
    std::string get_date();
private:
    bool is_valid(int month, int day, int year);
    int _year;
    int _month;
    int _day;
};}