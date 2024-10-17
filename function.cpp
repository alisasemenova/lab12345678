#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include "function.h"

int HashTable::HashFunction(std::string lastname)
{
    int value = 0;
    for (int i = 0; i < lastname.length(); i++)
    {
        value+=(lastname[i]*(int)pow(ALPH_CONST, i)) % CAPACITY;
    }
    return value % CAPACITY;
}

void HashTable::enrolled(std::string path)
{    
    std::string lastname;
    std::ifstream in(path);
    if (in.is_open())
    {
        while (std::getline(in, lastname))
        {
            if (students[HashFunction(lastname)] == 1)
                duplics++;
            else
                unenrolled(lastname);
        }
    }
    in.close();
}

void HashTable::unenrolled(std::string lastname)
{
    if (students[HashFunction(lastname)] == 0)
    {
        students[HashFunction(lastname)] = 1;
        list += lastname + " ";
        students_count++;
    }
}

