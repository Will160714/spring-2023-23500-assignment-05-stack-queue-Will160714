#pragma once
#include "Node.h"
#define STACK_ERR_EMPTY 1
#define STACK_ERR_FULL 2

class Stack{
    private:
        Node *head;

    public:
        Stack();
        Stack(int x);
        ~Stack();
        void push(int x);
        int pop();
        int top();
        bool is_empty();
        Node* getHead();
};