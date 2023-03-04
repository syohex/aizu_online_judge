#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    int score_a = 0, score_b = 0;
    for (int i = 0; i < n; ++i) {
        std::string a, b;
        std::cin >> a >> b;

        if (a > b) {
            score_a += 3;
        } else if (a == b) {
            score_a += 1;
            score_b += 1;
        } else {
            score_b += 3;
        }
    }

    std::cout << score_a << ' ' << score_b << std::endl;
    return 0;
}
