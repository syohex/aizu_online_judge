#include <iostream>
#include <algorithm>
#include <cstdint>
#include <limits>

int main() {
    int n;
    std::cin >> n;

    int64_t m;
    std::cin >> m;

    int64_t ret = std::numeric_limits<int64_t>::min();
    int64_t min = m;

    for (int i = 1; i < n; ++i) {
        std::cin >> m;

        ret = std::max(ret, m - min);
        min = std::min(min, m);
    }

    std::cout << ret << std::endl;
    return 0;
}
