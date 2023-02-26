#include <iostream>

int main() {
    int w, h, x, y, r;
    std::cin >> w >> h >> x >> y >> r;

    if (x - r >= 0 && x + r <= w && y - r >= 0 && y + r <= h) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}
