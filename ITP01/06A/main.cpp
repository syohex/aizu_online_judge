#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }

    for (int i = n - 1; i >= 0; --i) {
        std::cout << v[i];
        if (i != 0) {
            std::cout << ' ';
        }
    }
    std::cout << std::endl;
    return 0;
}
