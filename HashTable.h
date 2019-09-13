#pragma once
#include "LinkedList.h"

class HashTable{
    public:
        HashTable(int n);
        ~HashTable();
        bool insert(std::string word);
        bool deleteTable();
        std::string find();
        void print();

    private:
        int m_bucketSize;
        LinkedList* m_table;

};