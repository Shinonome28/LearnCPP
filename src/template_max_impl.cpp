#include <iostream>

template <typename First, typename... Args>
First max(const First &first, const Args &...args) {
  return max(first, max(args...));
}

template <typename T, typename G>
T max(const T &a, const G &b) {
  return a < b ? b : a;
}

int main() {
  std::cout << max(1, 2, 3, 4) << std::endl;
  return 0;
}