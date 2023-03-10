#include <iostream>
#include <cmath>
#include <vector>

int main() {
    while (true) {
        int n;
        std::cin >> n;
        if (n == 0) {
            break;
        }

        std::vector<double> scores(n);
        double sum = 0;
        for (int i = 0; i < n; ++i) {
            std::cin >> scores[i];
            sum += scores[i];
        }

        double average = sum / n;

        double d = 0;
        for (int i = 0; i < n; ++i) {
            d += std::pow(scores[i] - average, 2);
        }

        double a = d / n;
        printf("%.8f\n", std::sqrt(a));
    }

    return 0;
}
