#include <iostream>

int main() {
    int limit;
    std::cin >> limit;

    int fib_nums[limit];
    int a=1, b=1, next_num;

    fib_nums[0] = 1;
    fib_nums[1] = 1;
    for (int i = 2; i < limit; i++) {
        next_num = a + b;
        a = b;
        b = next_num;

        fib_nums[i] = next_num;
    }

    std::cout << "| ";
    for (int i = 0; i < limit; i++) {
        std::cout << fib_nums[i] << " | ";
    }

    std::cout << std::endl;
    return 0;
}
