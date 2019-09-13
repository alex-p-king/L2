#include "LinkedList.h"

LinkedList::LinkedList(){
    m_size = 0;
    m_front = nullptr;
}

LinkedList::~LinkedList(){
    m_front = nullptr;
    m_size = 0;
}

bool LinkedList::addBack(std::string value){
    Node* temp = new Node(value); 
    Node* i = m_front;
    if(m_size == 0){
        m_front = temp;
        m_front->setNext(nullptr);
        m_size++;
        return true;
    }
    else{
        while(i->getNext() != nullptr){
            i = i->getNext();
        }
        i->setNext(temp);
        m_size++;
        return true;
    }
    return false;
}

bool LinkedList::addFront(std::string value){
    if(m_size == 0){
        m_front = new Node(value);
        m_size++;
        return true;
    }
    else{
    Node* temp = new Node(value);
    temp->setNext(m_front);
    m_front = temp;
    m_size++;
    }
    return false;
}

bool LinkedList::remove(std::string value){
    Node* temp = m_front;
    for(int i = 0; i < m_size; i++){
        if(temp->getValue() == value){
            if(i == 0){
                std::cout << "got here" << "\n";
                m_front = m_front->getNext();
                delete temp;
                m_size--;
                return true;
            }
            else if(i == m_size - 1){
                Node* prev = m_front;
                for(int j = 0; j < i-1; j++){
                    prev = prev->getNext();
                }
                prev->setNext(nullptr);
                delete temp;
                m_size--;
                return true;
            }
            else{
                Node* prev = m_front;
                for(int j = 0; j < i-1; j++){
                    prev = prev->getNext();
                }
                prev->setNext(temp->getNext());
                delete temp;
                m_size--;
                return true;
            }
        }
        temp = temp->getNext();
    }
    return false;
    
}

void LinkedList::printList(){
    Node* temp = m_front;
    if(m_size == 0){
        std::cout << "List is empty \n";
    }
    else {
        while(temp->getNext() != nullptr){
        temp->printNode();
        std::cout << " "; 
        temp = temp->getNext();
        }
        temp->printNode();
        std::cout << " ";
    }
    

}

bool LinkedList::search(std::string value){
    Node* temp = m_front;
    for(int i = 0; i < m_size; i++){
        if(temp->getValue() == value){
            //std::cout << "Found it at position: " << i << "\n";
            return true;
        }
        temp = temp->getNext();
    }
    return false;
}

Node* LinkedList::getFront(){
    return m_front;
}

int LinkedList::getSize(){
    return m_size;
}
