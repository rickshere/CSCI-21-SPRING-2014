FLAGS = -Wall -Wextra -Werror -pedantic 

pc20: SList.o pc20.o SLNode.o
	g++ $(FLAGS) SList.o pc20.o SLNode.o -o pc20

SList.o: SList.h SList.cpp
	g++ -c $(FLAGS) SList.cpp -o SList.o
	
pc20.o: pc20.cpp
	g++ -c $(FLAGS) pc20.cpp -o pc20.o

SLNode.o: SLNode.h SLNode.cpp
	g++ -c $(FLAGS) SLNode.cpp -o SLNode.o