#include <iostream>
#include "LinkedList.h"

int main(){
    std::cout << "hello World!\n";
    LinkedList list;
    list.addBack(15);
    list.addBack(16);
    list.addBack(2343);
    list.remove(16);
    list.printList();
    return 0;
}