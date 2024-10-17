#pragma once
#include <iostream>
#include <string>

class HashTable
{
    static const int CAPACITY = 100; //кол-во мест в таблице
    static const int ALPH_CONST = 26; //кол-во букв в алфавите

    public:
        int students[CAPACITY] = {0};
        int students_count = 0;
        int duplics = 0;
        std::string list ="";

        int HashFunction(std::string lastname); //Хэш функция, принимает lastname (строку, фамилию).
        void enrolled(std::string path); //Функция проверяет проголосовал ли человек, добавляет дубликаты, принимает path (путь до файла с фамилиями).
        void unenrolled(std::string lastname); //Функция зачисляет голосующего и записывает в списки, принимает lastname (строку, фамилию).
};

