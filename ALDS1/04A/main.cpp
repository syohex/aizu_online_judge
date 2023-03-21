#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }

    int q;
    std::cin >> q;

    int ret = 0;
    for (int i = 0; i < q; ++i) {
        int t;
        std::cin >> t;

        if (std::find(v.begin(), v.end(), t) != v.end()) {
            ++ret;
        }
    }

    std::cout << ret << std::endl;
    return 0;
}
