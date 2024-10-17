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

    int HashFunction(std::string key); //��� �������
    void add(std::string key, int value); //������� ���������� ������ �� ����� � ��������
    void del(std::string key); //������� �������� ������ �� �����
    void search(std::string key); //������� ������ ������ �� �����
    bool isEmpty(); //������� �������� �� ����� �� ������� �������
    int HTsize(); //������� ��������� ������� �������
};