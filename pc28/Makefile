FLAGS = -Wall -Wextra -Werror -pedantic

pc28:pc28.cpp fooditem.o magicitem.o
	g++ $(FLAGS) -o pc28 pc28.cpp item.o fooditem.o magicitem.o
item.o: item.cpp item.h
	g++ $(FLAGS) -c item.cpp -o item.o
fooditem.o: item.o fooditem.cpp fooditem.h
	g++ $(FLAGS) -c fooditem.cpp -o fooditem.o
magicitem.o: item.o magicitem.cpp magicitem.h
	g++ $(FLAGS) -c magicitem.cpp -o magicitem.o