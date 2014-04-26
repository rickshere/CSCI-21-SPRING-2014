FLAGS = -Wall -Wextra -Werror -pedantic

Driver: Driver.o DLList.o DLNode.o
	g++ $(FLAGS) DLNode.o DLList.o Driver.o -o Driver

Driver.o: Driver.cpp
	g++ -c $(FLAGS) Driver.cpp -o Driver.o

DLList.o: DLList.h DLList.cpp
	g++ -c $(FLAGS) DLList.cpp -o DLList.o

DLNode.o: DLNode.h DLNode.cpp
	g++ -c $(FLAGS) DLNode.cpp -o DLNode.o

clean:
	-rm -f *.o

cleanall:
	-rm -f *.o Driver