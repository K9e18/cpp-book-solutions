#include <iostream>

int main() {
    int limit;
    std::cin >> limit;
    limit -= 2;

    int counter = 0;
    int next_num;
    int a = 1;
    int b = 1;

    std::cout << "| " << a << " | " << b << " | ";

    while(counter < limit) {
        next_num = a + b;
        a = b;
        b = next_num;

        std::cout << next_num << " | ";
        counter++;
    }
    std::cout << std::endl;
    return 0;
}
