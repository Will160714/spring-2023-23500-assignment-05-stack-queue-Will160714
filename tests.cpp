#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Stack.h"
#include "Queue.h"

//Stack Testing
TEST_CASE("Constructor"){
    Stack* test = new Stack();
    CHECK(test -> getHead() == nullptr);
    Stack test2 = Stack();
    CHECK(test2.getHead() == nullptr);
    Stack *test3 = new Stack(0);
    CHECK(test3 -> getHead() -> getData() == 0);
}

TEST_CASE("Deconstructor"){
    Stack *test = new Stack();
    delete test;
    test = nullptr;
    CHECK(test == nullptr);
}

TEST_CASE("Push"){
    Stack* test = new Stack();
    test -> push(10);
    CHECK(test -> getHead() -> getData() == 10);
    CHECK(test -> getHead() -> getNext() == nullptr);
    Stack* test2 = new Stack(0);
    test2 -> push(1);
    CHECK(test2 -> getHead() -> getData() == 1);
    CHECK(test2 -> getHead() -> getNext() -> getData() == 0);
}

TEST_CASE("Pop"){
    Stack* test = new Stack();
    bool works = true;
    try{
        test -> pop();
    }
    catch(int e){
        works = false;
    }
    CHECK(works == false);
    test = new Stack(100);
    CHECK(test -> pop() == 100);
    CHECK(test -> getHead() == nullptr);
}

TEST_CASE("Top"){
    Stack* test = new Stack();
    bool works = true;
    try{
        test -> top();
    }
    catch(int e){
        works = false;
    }
    CHECK(works == false);
    test = new Stack(100);
    CHECK(test -> top() == 100);
    CHECK(test -> getHead() != nullptr);
}

TEST_CASE("Empty"){
    Stack* test = new Stack();
    CHECK(test -> is_empty() == true);
    test -> push(10);
    CHECK(test -> is_empty() == false);
    test = new Stack(10);
    CHECK(test -> is_empty() == false);
}

//Queue Testing
TEST_CASE("Constructor"){
    Queue test;
    CHECK(test.getHead() == 0);
    CHECK(test.getBack() == 0);
    Queue* test2 = new Queue();
    CHECK(test2 -> getHead() == 0);
    CHECK(test2 -> getBack() == 0);
}

TEST_CASE("Enqueue"){
    Queue* test = new Queue();
    test -> enqueue(10);
    CHECK(test -> getItem(test -> getBack()) == 10);
    test -> enqueue(20);
    CHECK(test -> getItem(test -> getBack()) == 20);
    for(int x = 2; x < 20; x++){
        test -> enqueue(x);
    }
    bool works = true;
    try{
        test -> enqueue(30);
    }
    catch(int e){
        works = false;
    }
    CHECK(works == false);
}

TEST_CASE("Dequeue"){
    Queue *test = new Queue();
    test -> enqueue(10);
    CHECK(test -> dequeue() == 10);
    CHECK(test -> getItem(test -> getHead()) == 0);
    test -> enqueue(20);
    test -> enqueue(30);
    CHECK(test -> dequeue() == 20);
    CHECK(test -> getItem(test -> getHead()) == 30);
}

TEST_CASE("Front"){
    Queue *test = new Queue();
    CHECK(test -> front() ==  0);
    test = new Queue();
    test -> enqueue(10);
    CHECK(test -> front() == 10);
    test -> enqueue(20);
    test -> dequeue();
    CHECK(test -> front() == 20);
}

TEST_CASE("Empty"){
    Queue *test = new Queue;
    CHECK(test -> is_empty() == true);
    test -> enqueue(10);
    CHECK(test -> is_empty() == false);
    test -> dequeue();
    CHECK(test -> is_empty() == true);
}

TEST_CASE("Full"){
    Queue *test = new Queue();
    CHECK(test -> is_full() == false);
    for(int x = 0; x < 20; x++)
        test -> enqueue(10);
    std::cout << test -> getBack() << std::endl;
    CHECK(test -> is_full() == true);
}