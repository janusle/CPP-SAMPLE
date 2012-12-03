CC=g++
FLAG=-lboost_thread-mt -lboost_system-mt -pthread

all: e1 e2

e1: 
	$(CC) -o e1 e1.cpp $(FLAG)

e2:
	$(CC) -o e2 e2.cpp $(FLAG)

clean:
	-rm e1 e2

