#include <iostream>
#include <cstdint>
#include <string>
#include <vector>
#include <sstream>

int main() {
    std::string token;
    std::vector<int64_t> stack;

    std::string line;
    std::getline(std::cin, line);

    std::stringstream ss(line);
    while (std::getline(ss, token, ' ')) {
        char c = token[0];
        if (c == '+') {
            int64_t op2 = stack.back();
            stack.pop_back();
            int64_t op1 = stack.back();
            stack.pop_back();
            stack.push_back(op1 + op2);
        } else if (c == '-') {
            int64_t op2 = stack.back();
            stack.pop_back();
            int64_t op1 = stack.back();
            stack.pop_back();
            stack.push_back(op1 - op2);
        } else if (c == '*') {
            int64_t op2 = stack.back();
            stack.pop_back();
            int64_t op1 = stack.back();
            stack.pop_back();
            stack.push_back(op1 * op2);
        } else {
            int64_t num = std::stoll(token);
            stack.push_back(num);
        }
    }

    std::cout << stack.back() << std::endl;
    return 0;
}
