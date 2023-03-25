#include <iostream>
#include <queue>
#include <string>

int main() {
    int64_t n, q;
    std::cin >> n >> q;

    std::queue<std::pair<std::string, int64_t>> queue;
    std::string name;
    int64_t time;
    for (int64_t i = 0; i < n; ++i) {
        std::cin >> name >> time;
        queue.emplace(name, time);
    }

    int64_t total = 0;
    while (!queue.empty()) {
        auto [name, time] = queue.front();
        queue.pop();

        if (time - q <= 0) {
            total += time;
            std::cout << name << " " << total << std::endl;
        } else {
            queue.emplace(name, time - q);
            total += q;
        }
    }
    return 0;
}
