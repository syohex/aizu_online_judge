#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> ve;
    for (int i = 0; i < n; ++i) {
        int op;
        std::cin >> op;

        if (op == 0) {
            int v;
            std::cin >> v;

            ve.push_back(v);
        } else if (op == 1) {
            int v;
            std::cin >> v;
            std::cout << ve[v] << std::endl;
        } else {
            ve.pop_back();
        }
    }
    return 0;
}
