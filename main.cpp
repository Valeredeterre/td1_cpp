#include <iostream>
#include "heure.h"
#include "date.h"
#include "adress.h"

int main()
{
    Adress h1;
    std::cout << h1.get_adress() << std::endl;
    h1.set_adress(25, "rue de la Porte de Bessey", "BEZE", 21310, "France");
    std::cout << h1.get_adress() << std::endl;

    return EXIT_SUCCESS;
}