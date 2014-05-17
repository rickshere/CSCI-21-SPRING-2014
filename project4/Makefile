Flags = -Wall -Wextra -Werror -pedantic

#takes all object files and compiles them into an executable; Meet pp4
pp4: pp4.o Word.o
	g++ $(Flags) pp4.o Word.o -o pp4

#creates an object file from pp4.cpp BSTNode.h BSTree.h and Word.h
pp4.o: pp4.cpp BSTNode.h BSTree.h Word.h
	g++ $(Flags) -c pp4.cpp -o pp4.o

#creates an object file from word.cpp and word.h
Word.o: Word.cpp Word.h
	g++ $(Flags) -c Word.cpp -o Word.o
	
#removes all object files in directory
clean:
	rm *.o
#removes all object files and executable for project4
cleanall:
	rm *.o pp4