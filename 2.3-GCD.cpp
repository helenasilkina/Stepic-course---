#include <cassert>
#include <iostream>

template <class Int>
Int gcd(Int a, Int b) {

    if (a == 0) {
        return b;
    } 
    if (b == 0) {
        return a;
    }  
  int c;  
  if (a > b) {
    c = a % b;
    gcd(c, b); 
  } else {
    c = b % a;
    gcd(a, c); 
  }
}

int main(void) {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b) << std::endl;
  return 0;
}
