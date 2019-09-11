#pragma once
#include "Node.h"

class LinkedList {
    public:
        LinkedList();
        ~LinkedList();
        void addBack(int value);
        void remove(int value);
        void printList();
        int search(int value);

        Node* getFront();
        int getSize();

    private:
        Node* m_front = nullptr;
        int m_size = 0;
};