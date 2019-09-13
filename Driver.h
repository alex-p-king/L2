#pragma once
#include <iostream>
#include "HashTable.h"
#include "string.h"
#include <fstream>

class Driver{
    public:
        Driver();
        ~Driver();
        void run();
        void menu();
        void insert();
        void deleteTable();
        void find();
        void print();
        void test();
    private:
        HashTable * m_table;
};