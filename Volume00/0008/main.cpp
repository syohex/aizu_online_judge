#include <iostream>

int main() {
    int n;
    while (std::cin >> n) {
        int ret = 0;
        for (int i = 0; i <= 9; ++i) {
            for (int j = 0; j <= 9; ++j) {
                for (int k = 0; k <= 9; ++k) {
                    for (int m = 0; m <= 9; ++m) {
                        if (i + j + k + m == n) {
                            ++ret;
                        }
                    }
                }
            }
        }

        printf("%d\n", ret);
    }
    return 0;
}
