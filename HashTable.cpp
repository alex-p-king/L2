#include "HashTable.h"

HashTable::HashTable(int n){
    int m = ceil(n / 0.75);
    m_list = new LinkedList[m];
    m_bucketSize = m;
}

HashTable::~HashTable(){
    m_bucketSize = 0;
}

bool HashTable::insert(std::string word){
    int index = hash(word);
    return m_list[index].addFront(word);
}

bool HashTable::remove(std::string word){
    return m_list->remove(word);
}

bool HashTable::find(std::string word){
    int index = hash(word);
    return m_list[index].search(word);
}

void HashTable::print(){
    for(int i = 0 ; i < m_bucketSize; i++){
        std::cout << i << ": -> ";
        m_list[i].printList();
        std::cout << std::endl;
    }
}

int HashTable::hash(std::string word){
    int value = 0;
    for(char c : word){
       value += static_cast<int>(c);
    }
    value = floor(value % m_bucketSize);
    return (value);
}

LinkedList* HashTable::getTable(){
    return m_list;
}