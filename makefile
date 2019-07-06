# this is Makefile test

all:hello.cpp
	g++ hello.cpp -o hello.out
clean:
	rm -f hello.out