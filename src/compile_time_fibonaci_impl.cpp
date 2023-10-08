#include <iostream>

using FibT = unsigned long long;

template <unsigned N>
struct Fib {
  constexpr static FibT value = Fib<N - 1>::value + Fib<N - 2>::value;
};

template <>
struct Fib<0> {
  constexpr static FibT value = 0;
};

template <>
struct Fib<1> {
  constexpr static FibT value = 1;
};

int main() {
  std::cout << Fib<80>::value << std::endl;
  return 0;
}