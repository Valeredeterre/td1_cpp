#include "time.h"
#include <string>
#include <iostream>

class Hour
{
public:
    Hour(int hour, int minute, int second);
    Hour();
    std::string get_hour();
private:
    int _hour;
    int _minute;
    int _second;
};