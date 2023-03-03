#include <iostream>
#include <string>

int main() {
    while (true) {
        std::string s;
        std::cin >> s;
        if (s == "0") {
            break;
        }

        int64_t sum = 0;
        for (char c : s) {
            sum += c - '0';
        }
        std::cout << sum << std::endl;
    }
    return 0;
}
