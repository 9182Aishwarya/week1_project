CC=gcc
SRC=src/main.c src/student.c
TARGET=bin/week1_project

default:
	mkdir -p bin
	$(CC) $(SRC) -Iinclude -o $(TARGET)

clean:
	rm -f bin/*
