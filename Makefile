CC=gcc
CFLAGS=-g -Wall -Wextra -Wshadow
INCLUDE_DIR=include
LIBS=-lcs50

all: bible_quiz

bible_quiz: bible_quiz.o cs50.o
	$(CC) -o bible_quiz src/bible_quiz.o src/cs50.o # $(LIBS)

bible_quiz.o: src/Game.c include/cs50.h
	$(CC) -c -o src/bible_quiz.o src/Game.c -I $(INCLUDE_DIR) $(CFLAGS)

cs50.o: src/cs50.c include/cs50.h
	$(CC) -c -o src/cs50.o src/cs50.c -I $(INCLUDE_DIR) $(CFLAGS)

clean:
	rm -f src/*.o

