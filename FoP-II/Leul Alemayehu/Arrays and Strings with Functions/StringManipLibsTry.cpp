#include <iostream>
#include <string.h>
#include <ctype.h>
#include "LeulStringManipLib.h"

int main()
{
    char message[50];
    char messageTwo[50];
    std::cin.get(message, 50);
    strLowercaser(message);
}