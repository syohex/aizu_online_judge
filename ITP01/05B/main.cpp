#include <iostream>

int main() {
    while (true) {
        int h, w;
        std::cin >> h >> w;

        if (h == 0 && w == 0) {
            break;
        }

        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                if (i == 0 || j == 0 || i == h - 1 || j == w - 1) {
                    std::cout << '#';
                } else {
                    std::cout << '.';
                }
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;
    }
    return 0;
}
