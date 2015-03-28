CC = g++

all: text_utility.o text_processor.o file.o main.o outlinr clean

text_utility.o: text/text_utility.cc headers/text_utility.h
	$(CC) -c text/text_utility.cc

text_processor.o: text/text_processor.o headers/text_processor.h
	$(CC) -c text/text_processor.cc

file.o: main/file.cc headers/file.h
	$(CC) -c main/file.cc

main.o: main/main.cpp headers/main.h
	$(CC) -c main/main.cpp

outlinr: text_utility.o text_processor.o file.o main.o
	$(CC) -o out/outlinr *.o

clean:
	rm *.o
	rm text/*.o