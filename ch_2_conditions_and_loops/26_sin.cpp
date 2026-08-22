// Formule
// sin(x) ≈ x - (x^3 / 3!) + (x^5 / 5!) - (x^7 / 7!) + ... + ((-1)^n x^(2n+1))/((2n+1)!)

#include <iostream>
#include <cmath>

double custom_sin(double x) {
    const double epsilon = 0.0000000001;

    double sum = 0.0;
    double current_term = x;
    int step = 1;
    double x_squared = x * x;

    while (std::abs(current_term) >= epsilon) {
        sum += current_term;
        current_term = -current_term * x_squared / ((step + 1) * (step + 2));
        step += 2;
    }
    return sum;
}

int main() {
    double num;

    // User input
    std::cout << "Enter x: ";
    std::cin >> num;

    double result = custom_sin(num);
    std::cout << "\n" << result << std::endl;

    return 0;
}
