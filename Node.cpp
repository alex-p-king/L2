#include "Node.h"

Node::Node(){
    m_value = 0;
    m_next = nullptr;
}

Node::Node(int value){
    m_value = value;
    m_next = nullptr;
}

Node::~Node(){
    
}

Node* Node::getNext(){
    return m_next;
}

void Node::setNext(Node* next){
    m_next = next;
}

int Node::getValue()const{
    return m_value;
}

void Node::setValue(int value){
    m_value = value;
}

void Node::printNode(){
    std::cout << m_value;
}