#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<int> table(26, 0);
    std::string s;
    while (std::getline(std::cin, s)) {
        for (char c : s) {
            c = c >= 'A' && c <= 'Z' ? c - 'A' + 'a' : c;
            if (c >= 'a' && c <= 'z') {
                table[c - 'a'] += 1;
            }
        }
    }

    for (int i = 0; i < 26; ++i) {
        printf("%c : %d\n", i + 'a', table[i]);
    }
    return 0;
}
