#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include "function.h"

HashTable::HashTable(int size)
{
    this->capacity = size;
    elements = new int[size] {};
}

int HashTable::HashFunction(std::string key)
{
    size_t value = 0;
    for (int i = 0; i < key.length(); i++)
    {
        value += (key[i] * (int)pow(ALPH_CONST, i)) % capacity;
    }
    return value % capacity;
}

void HashTable::add(std::string key, int value)
{
    int index = HashFunction(key);
    elements[index] = value;
    count_elem++;
}
void HashTable::del(std::string key)
{
    int index = HashFunction(key);
    elements[index] = 0;
    count_elem--;
}
void HashTable::search(std::string key)
{
    for (int i = 0; i < capacity; i++)
    {
        if (i == HashFunction(key))
        {
            std::cout << "The value of " << key << " is: " << elements[i] << std::endl;
            return;
        }
    }
    std::cout << "Empty" << std::endl;
}
bool HashTable::isEmpty()
{
    if (count_elem == 0)
        return true;
    else
        return false;
}
int HashTable::HTsize()
{
    return capacity;
}