#include "Queue.h"
#include <iostream>

Queue::Queue(){
    head = 0;
    back = 0;
}

void Queue::enqueue(int x){
    if(back < 20){
        arr[back] = x;
        back++;
        return;
    }
    throw QUEUE_ERR_FULL;
}

int Queue::dequeue(){
    if(arr[head] != 0){
        int data = arr[head];
        arr[head] = 0;
        head++;
        return data;
    }
    return 0;
}

int Queue::front(){
    return arr[head];
}

bool Queue::is_empty(){
    if(back == 0 || head == back)
        return true;
    return false;
}

bool Queue::is_full(){
    if(back - 1 == 19)
        return true;
    return false;
}

int Queue::getHead(){
    return head;
}

int Queue::getBack(){
    if(back == 0)
        return back;
    return back - 1;
}

int Queue::getItem(int index){
    return arr[index];
}