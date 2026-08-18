#include <iostream>

int main() {
    int counter = 1;
    int num = 0;
    int limit;
    std::cin >> limit;

    while(counter <= limit) {
        num = 4 * counter + 3;
        std::cout << num << " ";
        counter++;
    }
    std::cout << std::endl;
    return 0;
}