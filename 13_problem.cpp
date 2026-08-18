#include <iostream>

unsigned long long sum_of_odd_progressive(int limit) {
    return limit * limit;
}

int main() {
    int limit;
    std::cin >> limit;

    unsigned long long sum = sum_of_odd_progressive(limit);

    std::cout << sum << std::endl;
    return 0;
}
