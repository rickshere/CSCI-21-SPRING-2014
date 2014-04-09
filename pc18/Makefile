FLAGS = -Wall -Wextra -Werror -pedantic 

pc18: SList.o pc18.o SLNode.o
	g++ $(FLAGS) SList.o pc18.o SLNode.o -o pc18

SList.o: SList.h SList.cpp
	g++ -c $(FLAGS) SList.cpp -o SList.o
	
pc18.o: pc18.cpp
	g++ -c $(FLAGS) pc18.cpp -o pc18.o

SLNode.o: SLNode.h SLNode.cpp
	g++ -c $(FLAGS) SLNode.cpp -o SLNode.o