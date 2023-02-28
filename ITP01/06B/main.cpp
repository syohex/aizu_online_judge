#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<bool>> v(4, std::vector<bool>(14, false));
    for (int i = 0; i < n; ++i) {
        char suit;
        int num;
        std::cin >> suit >> num;

        switch (suit) {
        case 'S':
            v[0][num] = true;
            break;
        case 'H':
            v[1][num] = true;
            break;
        case 'C':
            v[2][num] = true;
            break;
        case 'D':
            v[3][num] = true;
            break;
        }
    }

    for (int i = 0; i < 4; ++i) {
        char c;
        switch (i) {
        case 0:
            c = 'S';
            break;
        case 1:
            c = 'H';
            break;
        case 2:
            c = 'C';
            break;
        case 3:
            c = 'D';
            break;
        }

        for (int j = 1; j <= 13; ++j) {
            if (!v[i][j]) {
                std::cout << c << ' ' << j << std::endl;
            }
        }
    }

    return 0;
}
