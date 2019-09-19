#include "HashTable.h"

HashTable::HashTable(int n){
    int m = ceil(n / 0.75);
    m_list = new LinkedList[m];
    m_bucketSize = m;


}

HashTable::~HashTable(){
    m_bucketSize = 0;
    m_numElements = 0;
}

bool HashTable::insert(std::string word){
    int index = hash(word);
    if(m_list[index].addFront(word)){
        m_numElements++;
        load(m_bucketSize,m_numElements);
        if(m_loadFactor > 1){
            rehash();
        }
        return true;
    }
    return false;
}

bool HashTable::remove(std::string word){
    int index = hash(word);
    if(m_list[index].remove(word)){
        m_numElements--;
        return true;
    }
    return false;
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

void HashTable::load(int m, int n){
    m_loadFactor = double(n)/double(m);
}

int HashTable::nextPrime(int n){
    bool prime = false;
    int pnum = n;
    for(int i = 2; i < pnum; i++){
            if(pnum % i == 0){
                pnum++;
            }
    }
    return pnum;
}

void HashTable::rehash(){
    int n_size = nextPrime(2*m_bucketSize);
    LinkedList* temp = new LinkedList[n_size];
    LinkedList* backup = m_list;
    m_list = temp;
    int oldSize = m_bucketSize;
    m_bucketSize = n_size;
    m_numElements = 0;
    Node* tempNode;
    std::cout << "***REHASHING*** new Bucket Size: " << m_bucketSize << std::endl;
    //loop through my array of lists then get the value from each list and hash it to the new table
    LinkedList tempList;
    std::string word;
    for(int i = 0; i < oldSize; i++){
        tempList = backup[i];
        tempNode = tempList.getFront();
        for(int j = 0; j < tempList.getSize(); j++){
            word = tempNode->getValue();
            insert(word);
            tempNode = tempNode->getNext();
        }
    }
}

LinkedList* HashTable::getTable(){
    return m_list;
}