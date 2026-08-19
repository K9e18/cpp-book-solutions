#include <iostream>

unsigned long long get_factorial(int num) {
    unsigned long long result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int limit;
    if (!(std::cin >> limit) || limit < 0 || limit > 20) {
        std::cout << "Entered invalid value (must be between 0 and 20)" << std::endl;
        return 1;
    }

    int count = 0;
    unsigned long long n_fact = get_factorial(limit); 

    while (count <= limit) {
        unsigned long long k_fact = get_factorial(count);
        unsigned long long dif_nk_fact = get_factorial(limit - count);
        
        unsigned long long num = n_fact / (k_fact * dif_nk_fact);
        std::cout << num << " | ";
        count++;
    }

    std::cout << std::endl;
    return 0;
}
