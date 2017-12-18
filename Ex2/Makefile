
all: ex2 Build run
ex2:
	g++ -std=c++11 -c Ex2.cpp -o ex2.o -Wall -Wvla -Werror -g
Build:
	g++ ex2.o -o run.o
run:
	./run.o
clean:

	rm -f *.o