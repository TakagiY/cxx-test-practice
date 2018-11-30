#include <stdexcept>
#include <type_traits>

template <class Int>
auto fib(Int n) -> Int {
  static_assert(std::is_integral<Int>::value,
                "type of n is must be integer type.");

  if (n < 0) {
    throw std::logic_error{"fib(n): n must not be negative."};
  }
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  return fib(n - 1) + fib(n - 2);
}
