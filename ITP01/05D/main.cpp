#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    const auto include_three = [](int n) -> bool { return std::to_string(n).find('3') != std::string::npos; };

    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 || include_three(i)) {
            std::cout << ' ' << i;
        }
    }
    std::cout << std::endl;
    return 0;
}
