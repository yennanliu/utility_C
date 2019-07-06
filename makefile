# this is Makefile test
all:helloworld

default: help;

define HELP
\n
cmd    		| help
--------------------------------------------------------------------------------------
build		| dev 
check		| dev 
deploy		| dev 
help  		| show help table 
test		| runs tests
\n
endef

export HELP

# declare vars 
CC = gcc
INSTDIR = $(pwd)
INCLUDE = .

help:
	@echo -n "$$HELP"

helloworld: helloworld.c
	$(CC) -o helloworld helloworld.c

clean:
	rm -f helloworld

install: mytest
	@if[   -d $(INSTDIR)   ]; \
	then   \
		./helloworld 
		echo "Installed in $(INSTDIR)";\
	else \
		echo "Sorry, $(INSTDIR) does not exist";\
	fi
