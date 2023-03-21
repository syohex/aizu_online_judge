#include <iostream>
#include <set>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string op, val;

    std::set<std::string> dict;
    for (int i = 0; i < n; ++i) {
        std::cin >> op >> val;
        if (op == "insert") {
            dict.insert(val);
        } else if (op == "find") {
            printf("%s\n", dict.find(val) != dict.end() ? "yes" : "no");
        }
    }
    return 0;
}
