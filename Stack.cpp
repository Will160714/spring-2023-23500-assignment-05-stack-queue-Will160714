#include "Stack.h"
#include <iostream>

Stack::Stack(){
    head = nullptr;
}

Stack::Stack(int x){
    head = new Node(x);
}

Stack::~Stack(){
    Node *trailer = nullptr;
    Node *walker = head;
    while(walker != nullptr){
        trailer = walker;
        walker = walker -> getNext();
        delete trailer;
    }
}

//Need to test for "FULL"
void Stack::push(int x){
    Node* newHead = new Node(x);
    newHead -> setNext(head);
    head = newHead;
}

int Stack::pop(){
    if(head == nullptr)
        throw STACK_ERR_EMPTY;
    int data = head -> getData();
    Node *newHead = head -> getNext();
    delete head;
    head = newHead;
    return data;
}

int Stack::top(){
    if(head == nullptr)
        throw STACK_ERR_EMPTY;
    return head -> getData();
}

bool Stack::is_empty(){
    if(head == nullptr)
        return true;
    return false;
}

Node* Stack::getHead(){
    return head;
}
