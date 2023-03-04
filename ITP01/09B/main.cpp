#include <iostream>
#include <string>

int main() {
    std::string s;
    int count;
    while (true) {
        std::cin >> s;
        if (s == "-") {
            break;
        }

        std::cin >> count;

        int sum = 0;
        for (int i = 0; i < count; ++i) {
            int t;
            std::cin >> t;
            sum += t;
        }

        sum = sum % s.size();
        for (size_t i = 0, j = sum; i < s.size(); ++i, ++j) {
            std::cout << s[j % s.size()];
        }
        std::cout << std::endl;
    }
    return 0;
}
