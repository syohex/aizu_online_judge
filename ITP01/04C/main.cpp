#include <iostream>
#include <cstdio>

int main() {
    while (true) {
        int a, b;
        char op;

        std::cin >> a >> op >> b;
        if (op == '?') {
            break;
        }

        int ret = 0;
        switch (op) {
        case '+':
            ret = a + b;
            break;
        case '-':
            ret = a - b;
            break;
        case '*':
            ret = a * b;
            break;
        case '/':
            ret = a / b;
            break;
        }

        std::cout << ret << std::endl;
    }
    return 0;
}
