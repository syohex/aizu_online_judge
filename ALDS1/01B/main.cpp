#include <iostream>
#include <cstdint>

int main() {
    int64_t x, y;
    std::cin >> x >> y;

    while (y > 1) {
        auto mod = x % y;
        if (mod == 0) {
            break;
        }

        x = y;
        y = mod;
    }

    std::cout << y << std::endl;
    return 0;
}
