#include <iostream>
#include <cstdint>

int main() {
    int n;
    std::cin >> n;

    int64_t m = 100'000;
    for (int i = 0; i < n; ++i) {
        m = m * 1.05;
        int64_t mod = m % 1000;
        if (mod != 0) {
            m -= mod;
            m += 1000;
        }
    }

    std::cout << m << std::endl;
    return 0;
}
