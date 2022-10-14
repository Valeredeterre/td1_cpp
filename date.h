#include "time.h"
#include <string>

class Date
{
public:
    Date(int year, int month, int day);
    std::string get_date();
private:
    int _year;
    int _month;
    int _day;
};