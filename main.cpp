#include <iostream>
#include "heure.h"
#include "date.h"

int main()
{
    Date h1(2019, 12, 31);
    std::cout << h1.get_date() << std::endl;
    return EXIT_SUCCESS;
}