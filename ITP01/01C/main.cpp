#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    int area = a * b;
    int perimeter = 2 * a + 2 * b;

    std::cout << area << ' ' << perimeter << std::endl;
    return 0;
}
