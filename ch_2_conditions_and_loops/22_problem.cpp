#include <iostream>

int sum_even_nums(int limit) {
    int i = 1;
    int sum = 0;
    do {
        if (i % 2 == 0)
           sum += i;
        i++;
    } while (i <= limit);

    return sum;
}

int main() {
    int limit;
    std::cin >> limit;

    std::cout << sum_even_nums(limit) << std::endl;
    return 0;
}
