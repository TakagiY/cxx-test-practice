#include <stdexcept>
#include <type_traits>

template <class Int>
auto fib(Int n) {
  static_assert(std::is_integral_v<Int>);

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
