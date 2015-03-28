CC = g++

all: text.o main.o outlinr clean

text.o: text/text.cpp headers/text.h
	$(CC) -c text/text.cpp

main.o: main/main.cpp
	$(CC) -c main/main.cpp

outlinr: text.o main.o
	$(CC) -o out/outlinr text.o main.o

clean:
	rm *.o