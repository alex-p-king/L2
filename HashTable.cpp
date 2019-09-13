#include "HashTable.h"

HashTable::HashTable(int n){
    int m = ceil(n / 0.75);
    m_table = new LinkedList[m];
    m_bucketSize = m;
}

HashTable::~HashTable(){
    m_bucketSize = 0;
    delete this;
}

bool HashTable::insert(std::string word){
    std::cout << "inserting " << word << " \n";
    hash(word);
    return true;
}

bool HashTable::deleteTable(){
    return true;
}

std::string HashTable::find(std::string word){
    return "abc";
}

void HashTable::print(){
    std::cout << "Print function called" << std::endl;
}

int HashTable::hash(std::string word){
    int value = 0;
    for(char c : word){
       value += static_cast<int>(c);
    }
    std::cout << "Hashing " << word << " in bucket " << m_bucketSize << std::endl;
    return (value);
}