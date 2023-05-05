#include <iostream>

int main() {
    double a, b, c, d, e, f;

    while (std::cin >> a >> b >> c >> d >> e >> f) {
        double x = (c * e - b * f) / (a * e - b * d);
        double y = (a * f - c * d) / (a * e - b * d);
        if (x == -0.0) {
            x = 0;
        }
        if (y == -0.0) {
            y = 0;
        }
        printf("%.3f %.3f\n", x, y);
    }

    return 0;
}
