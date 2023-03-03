#include <iostream>
#include <string>

int main() {
    std::string s, p;
    std::getline(std::cin, s);
    std::getline(std::cin, p);

    s = s + s;
    if (s.find(p) != std::string::npos) {
        std::cout << "Yes"<< std::endl;
    } else {
        std::cout << "No"<< std::endl;
    }

    return 0;
}
