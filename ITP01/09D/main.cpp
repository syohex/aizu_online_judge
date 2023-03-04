#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str;
    std::cin >> str;

    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string command;
        std::cin >> command;

        if (command == "replace") {
            int s, e;
            std::string t;
            std::cin >> s >> e >> t;
            for (int j = s, k = 0; j <= e; ++j, ++k) {
                str[j] = t[k];
            }
        } else if (command == "reverse") {
            int s, e;
            std::cin >> s >> e;
            std::reverse(str.begin() + s, str.begin() + e + 1);
        } else if (command == "print") {
            int s, e;
            std::cin >> s >> e;
            for (int j = s; j <= e; ++j) {
                std::cout << str[j];
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
