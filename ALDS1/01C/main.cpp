#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    int ret = 0;
    for (int i = 0; i < n; ++i) {
        int m;
        std::cin >> m;

        if (m == 2) {
            ++ret;
            continue;
        }
        if (m == 1) {
            continue;
        }
        if (m % 2 == 0) {
            continue;
        }

        int limit = std::sqrt(m);
        bool is_prime = true;
        for (int j = 3; j <= limit; j += 2) {
            if (m % j == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            ++ret;
        }
    }

    std::cout << ret << std::endl;
    return 0;
}
