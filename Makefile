CC = g++
CFLAGS = -Wall -Wextra -Werror -pedantic -Weffc++

all: hello.o euler4.o

hello.o: hello.cpp
	$(CC) $(CFLAGS) -o hello.o hello.cpp

euler4.o: euler4.cpp
	$(CC) $(CFLAGS) -o euler4.o euler4.cpp

clean:
	rm -f *.o
