#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> a(n, std::vector<int>(m, 0));
    std::vector<int> b(m);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        std::cin >> b[i];
    }

    for (int i = 0; i < n; ++i) {
        int v = 0;
        for (int j = 0; j < m; ++j) {
            v += a[i][j] * b[j];
        }
        std::cout << v << std::endl;
    }
    return 0;
}
