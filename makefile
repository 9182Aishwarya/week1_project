CC=gcc
SRC=src/main.c src/student.c
TARGET=bin/week1_project
default:
	mkdir -p bin
	$(CC) $(SRC) -Iinclude -o $(TARGET)
SUBDIRS=src
all:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done
clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done
.PHONY: all clean
