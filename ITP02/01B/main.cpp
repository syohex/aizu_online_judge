#include <iostream>
#include <queue>

int main() {
    int n;
    std::cin >> n;

    std::deque<int> q;
    for (int i = 0;i < n; ++i) {
        int op;
        std::cin >> op;

        if (op == 0) {
            int d, x;
            std::cin >> d >> x;

            if (d == 0) {
                q.push_front(x);
            } else {
                q.push_back(x);
            }
        } else if (op == 1) {
            int p;
            std::cin >> p;
            std::cout << q[p] << std::endl;
        } else {
            int d;
            std::cin >> d;
            if (d == 0) {
                q.pop_front();
            } else {
                q.pop_back();
            }
        }
    }
    return 0;
}
