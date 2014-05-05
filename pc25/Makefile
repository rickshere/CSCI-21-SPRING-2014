FLAGS = -Wall -Wextra -Werror -pedantic

pc25:pc25.o BSTNode.o 
	g++ $(FLAGS) -o pc25 pc25.cpp BSTNode.o
pc25.o: pc25.cpp
	g++ $(FLAGS) -c pc25.cpp -o pc25.o

BSTNode.o: BSTNode.cpp BSTNode.h
	g++ $(FLAGS) -c BSTNode.cpp -o BSTNode.o