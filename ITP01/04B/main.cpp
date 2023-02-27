#include <iostream>
#include <cmath>
#include <cstdio>

int main() {
    double r;
    std::cin >> r;

    double area = r * r * M_PI;
    double diameter = 2 * r * M_PI;

    printf("%0.6f %0.6f\n", area, diameter);
    return 0;
}
