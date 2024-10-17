// mainlab8_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include "function.h"

int main()
{
    HashTable vivod;
    vivod.add("Gvozdi", 199);
    vivod.add("Gaiki", 240);
    vivod.add("Shurupi", 469);
    for (int i = 0; i < 10; i++)
    {
        std::cout << vivod.elements[i] << " " << i << std::endl;
    }
    vivod.search("Shurupi");
}