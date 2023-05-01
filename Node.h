#pragma once

class Node{
    private:
        int data;
        Node *next;
    public:
        Node();
        Node(int x);
        Node(int x, Node *next);

        void setData(int x);
        void setNext(Node *next);

        int getData();
        Node *getNext();
};