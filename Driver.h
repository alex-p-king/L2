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
        bool insert();
        bool deleteTable();
        std::string find();
        void print();
        void test();
    private:
        int n;
        HashTable m_table(int n);
};