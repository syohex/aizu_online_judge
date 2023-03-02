#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);

    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = (s[i] - 'a') + 'A';
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = (s[i] - 'A') + 'a';
        }
        std::cout << s[i];
    }
    std::cout << std::endl;
    return 0;
}
