#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v(10);
    for (int i = 0; i < 10; ++i) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end(), [](int a, int b) { return a > b; });

    for (int i = 0; i < 3; ++i) {
        printf("%d\n", v[i]);
    }
    return 0;
}
