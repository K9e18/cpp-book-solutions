#include <iostream>

int main() {
    int limit;
    std::cin >> limit;

    int even_nums_arr[limit];
    int num = 2;

    std::cout << "| ";
    for (int i = 0; i < limit; i++) {
        even_nums_arr[i] = num;
        num += 2;
    }

    for (int i = 0; i < limit; i++) {
        std::cout << even_nums_arr[i] << " | ";
    }

    std::cout << std::endl;
    return 0;
}
