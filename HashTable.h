#pragma once
#include "LinkedList.h"
#include <cmath>

class HashTable{
    public:
        HashTable(int n);
        ~HashTable();
        bool insert(std::string word);
        bool remove(std::string word);
        bool find(std::string word);
        void print();
        void rehash();
        int hash(std::string word);
        void load(int m, int n);
        int nextPrime(int n);
        LinkedList* getTable();

    private:
        int m_bucketSize;
        int m_numElements = 0;
        LinkedList* m_list;
        double m_loadFactor = 0;

};