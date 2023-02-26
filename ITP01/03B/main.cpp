#include <iostream>

int main() {
    for (int i = 1;; ++i) {
        int n;
        std::cin >> n;

        if (n == 0) {
            break;
        }

        std::cout << "Case " << i << ": " << n << std::endl;
    }
    return 0;
}
