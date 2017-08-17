lab3: Hash.o HashTable.o lab3.o LinkedList.o Tdir.o                       
	g++ Hash.o HashTable.o LinkedList.o Tdir.o lab3.o -o lab3 -lcrypto     

Hash.o: Hash.cpp Hash.h
	g++ -c Hash.cpp  

lab3.o: lab3.cpp
	g++ -c lab3.cpp
HashTable.o: HashTable.cpp HashTable.h
	g++ -c HashTable.cpp
LinkedList.o: LinkedList.cpp LinkedList.h
	g++ -c LinkedList.cpp -std=c++11
Tdir.o: Tdir.cpp Tdir.h
	g++ -c Tdir.cpp
clean:
	rm *.o
