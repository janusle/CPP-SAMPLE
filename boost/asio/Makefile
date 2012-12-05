CC=g++
FLAG=-lboost_thread-mt -lboost_system-mt -pthread

all: post s1

s1:
	$(CC) -o s1 s1.cpp $(FLAG)

post:
	$(CC) -o post post.cpp $(FLAG)

clean:
	-rm post

