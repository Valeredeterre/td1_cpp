#include "heure.h"


    temporality::Hour::Hour(int hour, int minute, int second)
    {
        int temps = time(NULL) + 3600*2;
        if(hour > 24 || hour < 0)
        {
            _hour = (temps/3600)%24;
        }else{_hour = hour;}

        if(minute > 60 || minute < 0)
        {
            _minute = (temps/60)%60;            
        }else{_minute = minute;}

        if(second > 60 || second < 0)
        {
            _second = temps%60;          
        }else{_second = second;}
    }

    temporality::Hour::Hour()
    {
        int temps = time(NULL) + 3600*2;
        _second = temps%60;
        _minute = (temps/60)%60;
        _hour = (temps/3600)%24;
    }

    std::string temporality::Hour::get_hour()
    {
        std::string hour = std::to_string(_hour);
        std::string minute = std::to_string(_minute);
        std::string second = std::to_string(_second);

        std::string time = hour + ":" + minute + ":" + second;

        return time;
    }