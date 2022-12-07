CC=gcc
CFLAGS=-c -Wall -std=c11

all: terminal-game-engine

terminal-game-engine: main.o
	$(CC) main.o -o main

main.o: main.c
	$(CC) $(CFLAGS) main.c
