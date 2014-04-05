FLAGS = -Wall -Wextra -Werror -pedantic

#Make an executable from Prize.o Box.o and project-2.o into project-2
project-2: Prize.o Box.o project-2.o
	g++ $(FLAGS) Prize.o Box.o project-2.o -o project-2

#Compile project-2.cpp to object file project-2.o 
project-2.o: project-2.cpp
	g++ -c $(FLAGS) project-2.cpp -o project-2.o

#Compiles Box.cpp to object file Box.o
Box.o: Box.h Box.cpp
	g++ -c $(FLAGS) Box.cpp -o Box.o

#Compiles prize.cpp to object file Prize.o
Prize.o:Prize.h Prize.cpp
	g++ -c $(FLAGS) Prize.cpp -o Prize.o

#removes all object files in directory
clean: 
	rm -f *.o
	
#removes the file executable of project-2
cleanall:
	rm -f project-2
	