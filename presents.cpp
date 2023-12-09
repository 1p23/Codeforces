#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> p(n), result(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> p[i];
        result[p[i] - 1] = i + 1;
    }
    for (int j = 0; j < n; ++j) {
        std::cout << result[j] << ' ';
    }
    std::cout << std::endl;
    return 0;
}
