#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    std::vector<double> a(n);
    std::vector<double> b(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        std::cin >> b[i];
    }

    double a1 = 0, a2 = 0, a3 = 0, ai = 0;
    for (int i = 0; i < n; ++i) {
        double diff = std::abs(a[i] - b[i]);

        a1 += diff;
        a2 += std::pow(diff, 2);
        a3 += std::pow(diff, 3);
        ai = std::max(ai, diff);
    }

    a2 = std::pow(a2, 1.0 / 2.0);
    a3 = std::pow(a3, 1.0 / 3.0);

    printf("%.8f\n", a1);
    printf("%.8f\n", a2);
    printf("%.8f\n", a3);
    printf("%.8f\n", ai);

    return 0;
}
