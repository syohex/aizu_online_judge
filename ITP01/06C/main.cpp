#include <iostream>
#include <vector>

int main() {
    int rooms[4][3][10] = {};
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int b, f, r, v;
        std::cin >> b >> f >> r >> v;

        rooms[b - 1][f - 1][r - 1] += v;
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 10; ++k) {
                std::cout << ' ' << rooms[i][j][k];
            }
            std::cout << std::endl;
        }

        if (i != 3) {
            for (int j = 0; j < 20; ++j) {
                std::cout << '#';
            }
            std::cout << std::endl;
        }
    }
    return 0;
}
