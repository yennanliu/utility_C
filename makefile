# this is Makefile test
# declare vars 
CC = gcc
INSTDIR = $(pwd)
INCLUDE = .

default: help;

define HELP
\n
cmd    		| help
--------------------------------------------------------------------------------------
help  		| show help table 
helloworld  	| dev 
build		| dev 
clean		| dev 
install		| dev 
\n
endef

export HELP

help:
	@echo -n "$$HELP"

helloworld: helloworld.c 
	$(CC) -o helloworld helloworld.c

build: for_loop.c while.c array.c 
	$(CC) -o for_loop for_loop.c
	$(CC) -o while while.c
	$(CC) -o array array.c

clean:
	rm -f helloworld
	rm -f for_loop
	rm -f while
	rm -f array

install: mytest
	@if[   -d $(INSTDIR)   ]; \
	then   \
		./helloworld 
		echo "Installed in $(INSTDIR)";\
	else \
		echo "Sorry, $(INSTDIR) does not exist";\
	fi
