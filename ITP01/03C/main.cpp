#include <iostream>

int main() {
    for (int i = 1;; ++i) {
        int x, y;
        std::cin >> x >> y;

        if (x == 0 && y == 0) {
            break;
        }

        if (x < y) {
            std::cout << x << " " << y << std::endl;
        } else {
            std::cout << y << " " << x << std::endl;
        }
    }
    return 0;
}
