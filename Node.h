#pragma once 
#include <iostream>

class Node{
    public:
        Node();
        Node(int value);
        ~Node();
        Node* getNext();
        void setNext(Node* next);
        int getValue() const;
        void setValue(int value);
        void printNode();
    private:
        Node* m_next = nullptr;
        int m_value = 0;
};