CC = g++
CFLAGS = -Wall -Wextra -Werror -pedantic -Weffc++

hello.o: hello.cpp
	$(CC) $(CFLAGS) -o hello.o hello.cpp
