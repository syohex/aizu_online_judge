#include <iostream>
#include <cstdint>
#include <limits>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    int64_t min = std::numeric_limits<int>::max();
    int64_t max = std::numeric_limits<int>::min();
    int64_t sum = 0;
    for (int i = 0; i < n; ++i) {
        int64_t m;
        std::cin >> m;

        min = std::min(min, m);
        max = std::max(max, m);
        sum += m;
    }

    std::cout << min << ' ' << max << ' ' << sum << std::endl;
    return 0;
}
