CC=g++
prefix=/usr/local

all:
	$(CC) -Wall -Wextra -O3 secureType.cpp -lxdo -o secureType

install: all
	sudo install -m 0755 secureType $(prefix)/bin
