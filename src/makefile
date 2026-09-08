CC = gcc

SRC = main.c student.c process.c

TARGET = ../bin/student_app

all:
	mkdir -p ../bin
	$(CC) $(SRC) -I../include -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean
