Hash: main.o Driver.o LinkedList.o Node.o HashTable.o
	g++ -std=c++11 -g -Wall main.o Driver.o LinkedList.o HashTable.o Node.o -o Hash

main.o: main.cpp Driver.h
	g++ -std=c++11 -g -Wall -c main.cpp

Node.o: Node.h Node.cpp 	
	g++ -std=c++11 -g -Wall -c Node.cpp

LinkedList.o: LinkedList.h LinkedList.cpp Node.h
	g++ -std=c++11 -g -Wall -c LinkedList.cpp

Driver.o: Driver.h Driver.cpp HashTable.h LinkedList.h
	g++ -std=c++11 -g -Wall -c Driver.cpp

HashTable.o: HashTable.h HashTable.cpp LinkedList.h
	g++ -std=c++11 -g -Wall -c HashTable.cpp

clean:
	rm *.o Hash