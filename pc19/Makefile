FLAGS = -Wall -Wextra -Werror -pedantic 

pc19: SList.o pc19.o SLNode.o
	g++ $(FLAGS) SList.o pc19.o SLNode.o -o pc19

SList.o: SList.h SList.cpp
	g++ -c $(FLAGS) SList.cpp -o SList.o
	
pc19.o: pc19.cpp
	g++ -c $(FLAGS) pc19.cpp -o pc19.o

SLNode.o: SLNode.h SLNode.cpp
	g++ -c $(FLAGS) SLNode.cpp -o SLNode.o