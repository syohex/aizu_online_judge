#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    for (auto it = s.rbegin(); it != s.rend(); ++it) {
        printf("%c", *it);
    }
    printf("\n");
    return 0;
}
