// cos(x) ≈ 1 - (x^2 / 2!) + (x^4 / 4!) - (x^6 / 6!) + ... + ((-1)^n x^(2n)) / ((2n)!)

#include <iostream>
#include <cmath>

double custom_cos(double x) {
    const double epsilon = 1e-10;

    double sum = 1.0; // First term of the series is 1
    double current_term = 1.0;
    double x_squared = x * x;
    int n = 1;

    while (true) {
        // calculate next term based on previous
        current_term *= -x_squared / (2 * n * (2 * n - 1));
        if (std::abs(current_term) < epsilon) {
            break;
        }
        sum += current_term;
        n++;
    }
    return sum;
}

int main() {
    double num;

    // User input
    std::cout << "Enter x: ";
    std::cin >> num;

    double result = custom_cos(num);
    std::cout << "Approximate cos(" << num << ") = " << result << std::endl;

    // For compasion, show the standard cos
    std::cout << "Standard cos(" << num << ") = " << std::cos(num) << std::endl;

    return 0;
}
