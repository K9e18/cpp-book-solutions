#include <iostream>

int main() {
    int limit;
    std::cout << "limit: ";
    std::cin >> limit;

    int nums[limit];

    for (int i = 0; i < limit; i++) {
        int num;
        std::cin >> num;
        nums[i] = num;
    }

    std::cout << "| ";
    for (int i = 0; i < limit; i++)
        std::cout << nums[i] << " | ";

    std::cout << std::endl;
    return 0;
}
