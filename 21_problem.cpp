#include <iostream>

int sum_odd_nums(int limit) {
    return limit * limit;
}

int main() {
    int limit;
    std::cin >> limit;

    int sum = sum_odd_nums(limit);
    std::cout << sum << std::endl;

    return 0;
}
