#include <iostream>
#include <vector>
#include <cstdint>

int main() {
    int64_t n;
    while (std::cin >> n) {
        std::vector<bool> primes(n + 1, true);
        int ret = 0;
        for (int64_t i = 2; i <= n; ++i) {
            if (!primes[i]) {
                continue;
            }

            ++ret;
            for (int64_t j = 2; i * j <= n; ++j) {
                primes[i * j]  = false;
            }
        }

        std::cout << ret << std::endl;
    }
    return 0;
}
