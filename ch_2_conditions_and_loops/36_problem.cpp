#include <iostream>

int main() {
    const int limit = 10;
    int fib_nums[limit];
    int a=1, b=1, next_num;

    int num;
    std::cin >> num;

    fib_nums[0] = 1;
    fib_nums[1] = 1;
    for (int i = 2; i < limit; i++) {
        next_num = a + b;
        a = b;
        b = next_num;

        fib_nums[i] = next_num;
    }

   for (int i : fib_nums) {
       if (i == num) {
           std::cout << "Your number is the Fibonacci number" << std::endl;
           return 0;
       }
   }
   std::cout << "Your number is not a Fibonacci number" << std::endl;

    return 0;
}
