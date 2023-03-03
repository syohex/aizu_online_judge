#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string w;
    std::cin >> w;

    std::string line;
    std::string word;
    int count = 0;
    while (std::getline(std::cin, line)) {
        if (line == "END_OF_TEXT") {
            break;
        }

        std::stringstream ss(line);
        while (std::getline(ss, word, ' ')) {
            for (char & c : word) {
                if (c >= 'A' && c <= 'Z') {
                    c = c - 'A' + 'a';
                }
            }

            if (w == word) {
                ++count;
            }
        }
    }

    std::cout << count << std::endl;

    return 0;
}
