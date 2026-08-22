#include <iostream>

int main() {
    int num1, num2, div_num;
    std::cin >> num1;
    std::cin >> num2;

    if (num1 > num2)
        div_num = num2;
    else div_num = num1;

    while (true) {
        if (num1 % div_num == 0 && num2 % div_num == 0) {
            std::cout << div_num << std::endl;
            break;
        }
        div_num--;
    }
    return 0;
}
