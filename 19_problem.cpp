#include <iostream>

int main() {
    int limit;
    std::cin >> limit;

    int nums[limit];
    for (int i = 0; i < limit; i++){
        if (i % 2 == 0)
            nums[i] = i;
        else nums[i] = i*i;
    }

    std::cout << "| ";
    for (int i = 0; i < limit; i++) {
        if (i % 2 == 0)
            std::cout << nums[i] << " | ";
        else std::cout << i << "^2 = " << nums[i] << " | ";
    }

    std::cout << std::endl;
    return 0;
}
