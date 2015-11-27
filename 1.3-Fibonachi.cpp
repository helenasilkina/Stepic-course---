#include <iostream>

int main(void) {
  long n, m, k;
  std::cin >> n >> m;
    k = 0;
    long a[m * 10];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i <= m * 10; i++) {
        a[i] = (a[i-1] + a[i-2]) % m;
        k = k + 1;
        if (a[i] == 1 && a[i-1] == 0) {
            break;
        }       
    }
  std::cout << a[n%k] << std::endl;
  return 0;
}
