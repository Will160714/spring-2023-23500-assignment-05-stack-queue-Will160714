#pragma once
#define QUEUE_ERR_EMPTY 1
#define QUEUE_ERR_FULL 2

class Queue{
    private:
        int arr[20];
        int head; //Index of current element
        int back;  //Index of lastest added element

    public:
        Queue();
        void enqueue(int x);
        int dequeue();
        int front();
        bool is_empty();
        bool is_full();
        int getHead();
        int getBack();
        int getItem(int index);
};