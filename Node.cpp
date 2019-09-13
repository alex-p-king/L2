#include "Node.h"

Node::Node(){
    m_value = "";
    m_next = nullptr;
}

Node::Node(std::string value){
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

std::string Node::getValue()const{
    return m_value;
}

void Node::setValue(std::string value){
    m_value = value;
}

void Node::printNode(){
    std::cout << m_value;
}