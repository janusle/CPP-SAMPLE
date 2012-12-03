CC=g++
FLAG=-lboost_thread-mt -lboost_system-mt -pthread

all: scoped_ptr leak share_ptr

leak:
	$(CC) -o leak leak.cpp

scoped_ptr: 
	$(CC) -o scoped_ptr scoped_ptr.cpp $(FLAG)

share_ptr:
	$(CC) -o share_ptr share_ptr.cpp $(FLAG)

clean:
	-rm scoped_ptr leak share_ptr

