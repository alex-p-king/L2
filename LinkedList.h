#pragma once
#include "Node.h"

class LinkedList {
    public:
        LinkedList();
        ~LinkedList();
        bool addBack(int value);

        bool remove(int value);
        void printList();
        bool search(int value);

        Node* getFront();
        int getSize();

    private:
        Node* m_front = nullptr;
        int m_size = 0;
};