#include <cassert>
#include <iostream>

int main(void) {
  int n;
  std::cin >> n;
    int a[n];  
    a[0] = 0;
    a[1] = 1; 
    for (int i = 2; i <= n; i++) {
        a[i] = (a[i-1] + a[i-2]) % 10;
    }    
  std::cout << a[n] << std::endl;
  return 0;
}
