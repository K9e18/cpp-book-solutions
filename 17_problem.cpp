#include <iostream>

long long get_step(int num, int step) {
    if (step == 0) return 1;
    for (int i = 0; i < step; i++) {
        num *= num;
    }
    return num;
}

int main() {
    int limit, num;
    std::cin >> limit;
    std::cin >> num;

    int two_square_nums[limit];
    std::cout << "| ";

    for (int i = 0; i < limit; i++) {
        two_square_nums[i] = get_step(num, i);
        std::cout << two_square_nums[i] << " | ";
    }

    std::cout << std::endl;
    return 0;
}
