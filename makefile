CC=gcc
CFLAGS=-c -Wall -std=c11

all: terminal-game-engine

terminal-game-engine: terminal_GE.o example.o
	$(CC) terminal_GE.o example.o -o example

example.o: example.c terminal_GE.h
	$(CC) $(CFLAGS) example.c

terminal_GE.o: terminal_GE.c terminal_GE.h
	$(CC) $(CFLAGS) terminal_GE.c
