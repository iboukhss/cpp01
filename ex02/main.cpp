#include <iostream>
#include <string>

int main()
{
    std::string str("HI THIS IS BRAIN");

    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Memory address of string:                " << &str << '\n';
    std::cout << "Memory address held by string pointer  : " << stringPTR << '\n';
    std::cout << "Memory address held by string reference: " << &stringREF << '\n';

    std::cout << "Value of string:            " << str << '\n';
    std::cout << "Value pointed by stringPTR: " << *stringPTR << '\n';
    std::cout << "Value pointed by stringREF: " << stringREF << '\n';

    return 0;
}
