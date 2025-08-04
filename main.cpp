#include <iostream>
#include <cmath>

bool isAllOnesInBase(long long n, long long k) {
    while (n > 0) {
        if (n % k != 1)
            return false;
        n /= k;
    }
    return true;
}
int main() {
    long long n;
    std::cin >> n;
    long long k;
    double i = 62;
    long long m = pow(n,0.5);
    while(true) {
        k = pow(n, 1 / i);
        if (isAllOnesInBase(n, k)) {
            std::cout << k;
            break;
        }
        if (m < k) {
            m = n - 1;
            std::cout << m;
            break;
        }
        i--;
    }
    return 0;
}