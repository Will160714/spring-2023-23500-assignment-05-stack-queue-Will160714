main: main.o Node.o Stack.o Queue.o
	g++ -o main main.o Node.o Stack.o Queue.o

tests: tests.o Node.o Stack.o Queue.o
	g++ -o tests tests.o Node.o Stack.o Queue.o

main.o: main.cpp Stack.h Queue.h Node.h

tests.o: tests.cpp Stack.h Queue.h Node.h

Node.o: Node.cpp Node.h

Stack.o: Stack.cpp Stack.h Node.h

Queue.o: Queue.cpp Queue.h 

clean:
	rm -f main.o Node.o tests.o Node.o Stack.o Queue.o