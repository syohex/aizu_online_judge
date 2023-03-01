#include <iostream>
#include <vector>

int main() {
    int r, c;
    std::cin >> r >> c;

    std::vector<std::vector<int>> m(r + 1, std::vector<int>(c + 1, 0));
    for (int i = 0; i < r; ++i) {
        int sum = 0;
        for (int j = 0; j < c; ++j) {
            std::cin >> m[i][j];
            sum += m[i][j];
        }
        m[i][c] = sum;
    }

    for (int i = 0; i <= c; ++i) {
        int sum = 0;
        for (int j = 0; j < r; ++j) {
            sum += m[j][i];
        }
        m[r][i] = sum;
    }

    for (int i = 0; i <= r; ++i) {
        for (int j = 0; j <= c; ++j) {
            std::cout << m[i][j];
            if (j != c) {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
