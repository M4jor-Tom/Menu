menuTest: test.o
	g++ test.o menu.o -o menuTest

test.o: test.cpp
	g++ -c test.cpp -o test.o
	
menu.o: Sources/menu.cpp
	g++ -c Sources/menu.cpp -o menu.o conio.o
	
menuChoice.o: Sources/menuChoice.cpp
	g++ -c Sources/menuChoice.cpp -o menuChoice.o

conio.o: conio/Sources/conio.cpp
	g++ -c conio/Sources/conio.cpp -o conio.o
