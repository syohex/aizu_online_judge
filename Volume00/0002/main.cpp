#include <iostream>
#include <string>

int main() {
    int a, b;

    while (std::cin >> a >> b) {
        int c = a + b;
        printf("%zd\n", std::to_string(c).size());
    }
    return 0;
}
