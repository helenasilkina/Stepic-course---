#include <iostream>
#include <cmath>

int main() {
  int a, b;
  std::cin >> a;
  b = a;  
  for (int y = 2; y <= b; y++) {
      if (a == 1) {
          break;
      }
      if (a % y == 0) {
          std::cout << y << ' ';
          a = a / y;
          y = y - 1;
      }
  }      
  return 0;
}
