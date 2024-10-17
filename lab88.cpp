// lab88.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include "function.h"
#include <fstream>
#include <string>

int main()
{
    HashTable vivod;
    std::string filename = "surnames.txt";
    std::ofstream in(filename, std::ofstream::app);
    std::string newlastname;
    std::cout << "Enter new lastnames or end for exist: " << std::endl;
    while (in.is_open())
    {
        std::getline(std::cin, newlastname);
        if (newlastname == "end")
        {
            break;
        }
        in << newlastname << std::endl;
    }
    in.close();
    std::cout << "New lastnames has written in file " << filename << std::endl;
    vivod.enrolled("surnames.txt");
    std::cout << "Number of voters: " << vivod.students_count << std::endl;
    std::cout << "Duplics: " << vivod.duplics << std::endl;
    std::cout << "List of voters: " << vivod.list << std::endl;
}
