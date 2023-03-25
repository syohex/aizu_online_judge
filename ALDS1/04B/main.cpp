#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    int ret = 0;
    int q;
    std::cin >> q;
    for (int i = 0; i < q; ++i) {
        int t;
        std::cin >> t;

        int left = 0;
        int right = v.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (v[mid] == t) {
                ++ret;
                break;
            }

            if (t < v[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
    }

    std::cout << ret << std::endl;
    return 0;
}
