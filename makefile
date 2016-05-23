lab5:main.o hugelnt.o
	g++ -o lab5 main.o hugelnt.o
main.o:main.cpp hugelnt.h
	g++ -c main.cpp
hugelnt.o:hugelnt.h  hugelnt.cpp
	g++ -c hugelnt.cpp
