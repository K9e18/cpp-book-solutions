#include <iostream>

int main() {
    int counter = 0;
    int num = 0;

    while (counter < 5) {
        if (num % 2 == 1) {
            std::cout << num << " ";
            counter++;
        }
        num++;
    }
    std::cout << std::endl;
    return 0;
}