CC=gcc
CFLAGS=-g -Wall -Wextra -Wshadow
INCLUDE_DIR=include
LIBS=-lcs50

all: bible_quiz

bible_quiz: bible_quiz.o
	$(CC) -o bible_quiz src/bible_quiz.o $(LIBS)

bible_quiz.o: src/Game.cpp
	$(CC) -c -o src/bible_quiz.o src/Game.cpp -I $(INCLUDE_DIR) $(CFLAGS)

