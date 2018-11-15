#include <array>
#include <cstddef>
#include <stdexcept>

#define CATCH_CONFIG_MAIN
#include "../src/fib.hpp"
#include "catch.hpp"

TEST_CASE("fib(n) | n >= 0 returns nth fibonacci number", "[fib]") {
  std::array fibonacci = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144};
  std::size_t size = fibonacci.size();

  for (std::size_t n = 0; n < size; ++n) {
    CAPTURE(n);
    CHECK(fib(n) == fibonacci[n]);
  }
}

TEST_CASE("fib(n) throw std::logic_error if n is negative.", "[fib]") {
  for (int n = 0; n < 5; ++n) {
    CAPTURE(n);
    CHECK_NOTHROW(fib(n));
  }
  for (int n = 1; n < 10; ++n) {
    CAPTURE(n);
    CHECK_THROWS_AS(fib(-n), std::logic_error);
  }
}
