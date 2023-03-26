#include <iostream>
#include <vector>

int main() {
    int n, q;
    std::cin >> n >> q;
    std::vector<std::vector<int>> v(n);

    for (int i = 0; i < q; ++i) {
        int op;
        std::cin >> op;
        switch (op) {
        case 0: {
            int t, x;
            std::cin >> t >> x;
            v[t].push_back(x);
            break;
        }
        case 1: {
            int t;
            std::cin >> t;
            for (size_t j = 0; j < v[t].size(); ++j) {
                printf("%d", v[t][j]);
                if (j != v[t].size() - 1) {
                    printf(" ");
                }
            }
            printf("\n");
            break;
        }
        case 2: {
            int t;
            std::cin >> t;
            v[t].clear();
            break;
        }
        }
    }
    return 0;
}
