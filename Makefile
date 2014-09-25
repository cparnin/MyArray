
#These variables are not used, but are left for future reference
CC          = gcc
CLINKER     = gcc
CCC         = g++
CCLINKER    = $(CCC)
INCLUDE_DIR = 
CFLAGS  = $(INCLUDE_DIR)
CCFLAGS = $(CFLAGS)
OPTFLAGS    = -g
LIB_PATH    =
LIB_LIST    = -lm
LIBS = $(LIB_PATH) $(LIB_LIST)

sources = MyArray.cc main.cc

# objects are the same as the source files with .cc replaced with .o
objects = $(sources:.cc=.o)

default: array

array: MyArray.o main.o
	g++ -g -o array MyArray.o main.o -lm

MyArray.o : MyArray.cc MyArray.h
	g++ -c MyArray.cc -o MyArray.o

main.o : main.cc MyArray.h
	g++ -c main.cc -o main.o


clean :
	rm *.o
	rm array




