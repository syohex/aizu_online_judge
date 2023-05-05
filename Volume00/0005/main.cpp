#include <iostream>
#include <cstdint>

int64_t gcd(int64_t a, int64_t b) {
    if (a % b == 0) {
        return b;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int64_t a, b;

    while (std::cin >> a >> b) {
        int64_t g = gcd(a, b);
        int64_t lcm = a / g * b;

        std::cout << g << " " << lcm << std::endl;
    }

    return 0;
}
