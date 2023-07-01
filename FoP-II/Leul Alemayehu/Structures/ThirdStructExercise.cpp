#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;

struct phone
{
   string areaCode;
   string exchange; 
   string number;
};

int main()
{
    phone numberOne = {"123" , "456" , "7890"};
    phone numberTwo;
    std::cout << "\nInput area code: ";
    getline(cin,numberTwo.areaCode);
    std::cout << "\nInput exchange number: ";
    getline(cin,numberTwo.exchange);
    std::cout << "\nInput number: ";
    getline(cin,numberTwo.number);
    std::cout << "\n(" << numberOne.areaCode << ") " << numberOne.exchange << "-" << numberOne.number;
    std::cout << "\n(" << numberTwo.areaCode << ") " << numberTwo.exchange << "-" << numberTwo.number;
}
