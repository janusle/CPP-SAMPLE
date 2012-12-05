CC=g++
LIB=../boost/lib/libboost_system.a ../boost/lib/libboost_thread.a
FLAG=-I ../boost -pthread

all: s1 strand

s1:
	$(CC) -o s1 s1.cpp $(LIB) $(FLAG)

strand:
	$(CC) -o strand strand.cpp $(LIB) $(FLAG)


clean:
	-rm s1 strand

