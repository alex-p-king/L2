#pragma once
#include "Node.h"

class LinkedList {
    public:
        LinkedList();
        ~LinkedList();
        bool addBack(std::string value);
        bool addFront(std::string value);
        bool remove(std::string value);
        void printList();
        bool search(std::string value);

        Node* getFront();
        int getSize();

    private:
        Node* m_front = nullptr;
        int m_size = 0;
};