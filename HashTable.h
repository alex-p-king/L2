#pragma once
#include "LinkedList.h"
#include <cmath>

class HashTable{
    public:
        HashTable(int n);
        ~HashTable();
        bool insert(std::string word);
        bool deleteTable();
        std::string find(std::string word);
        void print();
        int hash(std::string word);
        LinkedList* getTable();

    private:
        int m_bucketSize;
        LinkedList* m_list;

};