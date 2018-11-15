.PHONY: test test.build test.run

test: test.build test.run

test.build: src/fib.hpp test/catch.hpp test/test.cpp
	clang++ -std=c++17 -o test/test test/test.cpp

test/catch.hpp:
	wget -P test https://github.com/catchorg/Catch2/releases/download/v2.4.2/catch.hpp

test.run:
	test/test
