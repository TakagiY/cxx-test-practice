CXX = clang++
CXXFLAGS = -std=c++17 --coverage

.PHONY: test clean

test: test/test
	test/test

test/test: src/fib.hpp test/catch.hpp test/test.cpp
	$(CXX) $(CXXFLAGS) test/test.cpp -o test/test

test/catch.hpp:
	wget -P test https://github.com/catchorg/Catch2/releases/download/v2.4.2/catch.hpp

clean:
	rm -f test/test test/catch.hpp *.gcov *.gcna *.gcda *.gcno
