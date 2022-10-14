#include "adress.h"
#include "date.h"

class Client
{
public:
    Client(std::string name, std::string surname, Adress adress, Date birthdate, std::string email, std::string phone);
    Client();
    std::string get_client();
private:
    std::string _name;
    std::string _surname;
    std::string _email;
    std::string _phone;
    Adress _adress;
    Date _birthdate;
};
