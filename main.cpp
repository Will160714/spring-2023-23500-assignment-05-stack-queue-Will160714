#include "Queue.h"
#include "Stack.h"
#include <iostream>

int main(){
    //Stack
    std::cout << "Stack" << std::endl;
    Stack* test1 = new Stack();
    std::cout << "Empty: " << test1 -> is_empty() << "\n\n";
    std::cout << "Top with Empty Stack" << std::endl;
    try{
        std::cout << test1 -> top() << "\n\n";
    }
    catch(int e){
        std::cout << "Error "  << e << ", Stack is empty" << "\n\n";
    }

    std::cout << "Pop with Empty Stack" << std::endl;
    try{
        std::cout << test1 -> pop() << "\n\n";
    }
    catch(int e){
        std::cout << "Error "  << e << ", Stack is empty" << "\n\n";
    }
    std::cout << "Push" << "\n\n";
    test1 -> push(10);

    std::cout << "Top with Non-Empty Stack" << std::endl;
    try{
        std::cout << test1 -> top() << "\n\n";
    }
    catch(int e){
        std::cout << "Error "  << e << ", Stack is empty" << "\n\n";
    }

        std::cout << "Pop with Empty Stack" << std::endl;
    try{
        std::cout << test1 -> pop() << "\n\n";
    }
    catch(int e){
        std::cout << "Error "  << e << ", Stack is empty" << "\n\n";
    }
    delete test1;


    //Queue
    std::cout << "Queue" << std::endl;
    Queue *test2 = new Queue();
    std::cout << "Empty: " << test2 -> is_empty() << "\n\n";
    std::cout << "Full: " << test2 -> is_full() << "\n\n";

    std::cout << "Front with Empty Queue" << std::endl;
    std::cout << test2 -> front() << "\n\n";

    std::cout << "Dequeue with Empty Queue" << std::endl;
    std::cout << test2 -> dequeue() << "\n\n";

    std::cout << "Enqueue" << "\n\n";
    try{
        test2 -> enqueue(10);
    }
    catch(int e){
        std::cout << "Error " << e << ", Queue is full" << std::endl;
    }

    try{
        test2 -> enqueue(20);
    }
    catch(int e){
        std::cout << "Error " << e << ", Queue is full" << std::endl;
    }

    std::cout << "Front with Non-Empty Queue" << std::endl;
    std::cout << test2 -> front() << "\n\n";

    std::cout << "Dequeue with Non-Empty Queue" << std::endl;
    std::cout << test2 -> dequeue() << "\n";
    std::cout << test2 -> dequeue() << "\n\n";

    std::cout << "Full & Empty with Full Queue" << std::endl;
    for(int x = 2; x < 20; x++){
        test2 -> enqueue(20);
    }

    std::cout << "Full: " << test2 -> is_full() << std::endl;
    std::cout << "Empty: " << test2 -> is_empty() << std::endl << std::endl;

    std::cout << "Enqueue with Full Stack" << std::endl;
    try{
        test2 -> enqueue(30);
    }
    catch(int e){
        std::cout << "Error " << e << ", Queue is full" << std::endl;
    }



    return 0;
}