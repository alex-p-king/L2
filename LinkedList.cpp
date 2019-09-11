#include "LinkedList.h"

LinkedList::LinkedList(){

}

LinkedList::~LinkedList(){

}

void LinkedList::addBack(int value){
    Node* temp = new Node(value); 
    Node* i = m_front;
    if(m_size == 0){
        m_front = temp;
        m_front->setNext(nullptr);
        m_size++;
    }
    else{
        while(i->getNext() != nullptr){
            i = i->getNext();
        }
        i->setNext(temp);
        m_size++;
    }
}

void LinkedList::remove(int value){
    
    m_size--;
}

void LinkedList::printList(){
    Node* temp = m_front;
    for(int i = 0; i < m_size; i++){
        temp->printNode();
        std::cout << " ";
        temp = temp->getNext();
    }

}

int LinkedList::search(int value){
    return 0;
}

Node* LinkedList::getFront(){
    return m_front;
}

int LinkedList::getSize(){
    return m_size;
}