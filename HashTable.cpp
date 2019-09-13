#include "HashTable.h"

HashTable::HashTable(int n){
    int m = (n / 0.78);
    m_table = new LinkedList[n/m];
}

HashTable::~HashTable(){
    m_bucketSize = 0;
}

bool HashTable::insert(std::string word){
    std::cout << "inserting " << word << " \n";
    hash(word);
    return true;
}

bool HashTable::deleteTable(){
    return true;
}

std::string HashTable::find(){
    return "abc";
}

void HashTable::print(){
    std::cout << "Print function called" << std::endl;
}

int HashTable::hash(std::string word){
    std::cout << "Hashing -> " << word << " \n";
    return 1;
}