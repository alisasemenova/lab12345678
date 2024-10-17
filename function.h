#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <vector>

class HashTable
{
public:
    static const int ALPH_CONST = 33;
    int* elements;
    int capacity;
    int count_elem = 0;
    HashTable(int size = 10);

    int HashFunction(std::string key); //Хэш функция
    void add(std::string key, int value); //Функция добавления товара по ключу и значению
    void del(std::string key); //Функция удаления товара по ключу
    void search(std::string key); //Функция поиска товара по ключу
    bool isEmpty(); //Функция проверки не пуста ли таблица товаров
    int HTsize(); //Функция получения размера таблицы
};