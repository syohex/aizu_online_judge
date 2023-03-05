#include <iostream>
#include <cmath>

int main() {
    double x1, y1, x2, y2;

    std::cin >> x1 >> y1 >> x2 >> y2;

    double a = std::abs(x1 - x2);
    double b = std::abs(y1 - y2);

    double dist = std::sqrt(a * a + b * b);
    printf("%.8f\n", dist);
    return 0;
}
