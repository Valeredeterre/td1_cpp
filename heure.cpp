#include "heure.h"


    Hour::Hour(int hour, int minute, int second)
    {
        if (hour < 0 || hour > 23)
        {
            std::cout << "Invalid hour" << std::endl;
            _hour = 0;
        } else{_hour = hour;}

        if (minute < 0 || minute > 59)
        {
            std::cout << "Invalid minute" << std::endl;
            _minute = 0;
        } else{_minute = minute;}

        if (second < 0 || second > 59)
        {
            std::cout << "Invalid second" << std::endl;
            _second = 0;
        } else{_second = second;}
    }

    Hour::Hour()
    {
        int temps = time(NULL) + 3600*2;
        _second = temps%60;
        _minute = (temps/60)%60;
        _hour = (temps/3600)%24;
    }

    std::string Hour::get_hour()
    {
        std::string hour = std::to_string(_hour);
        std::string minute = std::to_string(_minute);
        std::string second = std::to_string(_second);

        std::string time = hour + ":" + minute + ":" + second;

        return time;
    }