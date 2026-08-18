#include <iostream>

int main() {
    int limit, k = 1;
    std::cin >> limit;

    int odd_nums_arr[limit];

    std::cout << "| ";
    for (int i = 0; i < limit; i++, k+=2) {
        odd_nums_arr[i] = k;
    }

    for (int i = 0; i < limit; i++) {
        std::cout << odd_nums_arr[i] << " | ";
    }

    std::cout << std::endl;

    return 0;
}
