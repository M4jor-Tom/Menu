conio.o: conio/Sources/conio.cpp
	g++ -c conio/Sources/conio.cpp -o conio.o

menu.o: Sources/menu.cpp
	g++ -c Sources/menu.cpp -o menu.o conio.o
	
menuTest: test.cpp
	g++ -c test.cpp menu.o -o test.o
	
menuChoice.o: Sources/menuChoice.cpp
	g++ -c Sources/menuChoice.cpp -o menuChoice.o
