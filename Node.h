#pragma once 
#include <iostream>

class Node{
    public:
        Node();
        Node(std::string value);
        ~Node();
        Node* getNext();
        void setNext(Node* next);
        std::string getValue() const;
        void setValue(std::string value);
        void printNode();
    private:
        Node* m_next = nullptr;
        std::string m_value = "";
};