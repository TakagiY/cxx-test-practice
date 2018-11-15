.PHONY: all build run clean

all: clean build run

build: ../src/fib.hpp catch.hpp test.cpp
	clang++ -std=c++17 -o test test.cpp

catch.hpp:
	wget https://github.com/catchorg/Catch2/releases/download/v2.4.2/catch.hpp

run:
	./test

clean:
	rm -f test catch.hpp
