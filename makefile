Hash: main.o LinkedList.o Node.o
	g++ -std=c++11 -g -Wall main.o LinkedList.o Node.o -o Hash

main.o: main.cpp LinkedList.h
	g++ -std=c++11 -g -Wall -c main.cpp

Node.o: Node.h Node.cpp 	
	g++ -std=c++11 -g -Wall -c Node.cpp

LinkedList.o: LinkedList.h LinkedList.cpp Node.h
	g++ -std=c++11 -g -Wall -c LinkedList.cpp

clean:
	rm *.o Hash