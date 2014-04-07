FLAGS = -Wall -Wextra -Werror -pedantic

pc17: SLNode.o pc17.o
	g++ $(FLAGS) SLNode.o pc17.o -o pc17

SLNode.o: SLNode.h SLNode.cpp
	g++ -c $(FLAGS) SLNode.cpp -o SLNode.o
	
pc17.o: pc17.cpp
	g++ -c $(FLAGS) pc17.cpp -o pc17.o
