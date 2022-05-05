Nqueen: BST.o main.o
	g++ -std=c++11 BST.o main.o -o buildTree

Nqueen.o: BST.cpp BST.o
	g++ -std=c++11 -c BST.cpp

main.o: main.cpp BST.h
	g++ -c main.cpp

clean:
	rm -f*.o
	rm buildTree

run: buildTree
	/runQueen
