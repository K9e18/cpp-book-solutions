#include <iostream>

unsigned long long sum_of_progressive(int limit) {
    unsigned long long sum = limit * (limit+1) / 2;
    return sum;
}

int main() {
    int limit;
    std::cin >> limit;

    unsigned long long sum = sum_of_progressive(limit);
    std::cout << sum << std::endl;
    
    return 0;
}
