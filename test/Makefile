CXX = clang++
CXXFLAGS = -std=c++17 --coverage

.PHONY: all build run clean

all: clean build run

build: ../src/fib.hpp catch.hpp test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

catch.hpp:
	wget https://github.com/catchorg/Catch2/releases/download/v2.4.2/catch.hpp

run: test
	./test

clean:
	rm -f test catch.hpp *.gcov *.gcna *.gcda *.gcno
