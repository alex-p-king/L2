#include "HashTable.h"

HashTable::HashTable(int n){
    int m = (n / 0.78);
    m_table = new LinkedList[n/m];
}
HashTable::~HashTable(){
    m_bucketSize = 0;
}