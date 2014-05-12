FLAGS = -Wall -Wextra -Werror -pedantic

pc27:pc27.o BSTree.o BSTNode.o
	g++ $(FLAGS) -o pc27 pc27.cpp BSTree.o BSTNode.o
pc27.o: pc27.cpp
	g++ $(FLAGS) -c pc27.cpp -o pc27.o
BSTree.o: BSTree.cpp BSTree.h
	g++ $(FLAGS) -c BSTree.cpp -o BSTree.o
BSTNode.o: BSTNode.cpp BSTNode.h
	g++ $(FLAGS) -c BSTNode.cpp -o BSTNode.o