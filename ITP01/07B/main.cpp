#include <iostream>

int main() {
    while (true) {
        int n, x;
        std::cin >> n >> x;

        if (n == 0 && x == 0) {
            break;
        }

        int ret = 0;
        for (int i = 1; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int diff = x - j - i;
                if (diff > j && diff <= n) {
                    ++ret;
                }
            }
        }

        std::cout << ret << std::endl;
    }

    return 0;
}
