#include <iostream>

int main() {
    int limit;
    std::cin >> limit;

    int square_nums[limit];
    
    std::cout << "| ";
    for (int i = 0, k=1; i < limit; i++, k++) {
        square_nums[i] = k*k;
        std::cout << square_nums[i] << " | ";
    }

    std::cout << std::endl;
    return 0;
}
