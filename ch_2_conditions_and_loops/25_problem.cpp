// Formule 
// ln(1 + x) ≈ x - (x^2 / 2) + (x^3 / 3) - (x^4 / 4) + ... + ((-1)^(n+1) x^n) / n

#include <iostream>
#include <cmath> // Required for std::log

// Custom function to calculate the absolute value of a number
double absolute_value(double num) {
    if (num < 0)
        return -num;
    else
        return num;
}

// Custom function to calculate ln(1 + x) using Taylor series
double custom_log(double x) {
    const double epsilon = 0.0000000001;

    double sum = 0.0;
    double step = 1.0;
    double sign = 1.0;
    double current_x = x;

    // Initial value to trigger the while loop
    double current_num = x; 

    // The loop continues until the current term is smaller than epsilon
    while (absolute_value(current_num) >= epsilon) {
        double fraction = current_x / step;
        current_num = fraction * sign;

        sum += current_num;

        step++;
        current_x *= x;
        sign *= -1.0;
    }
    return sum;
}

int main() {
    double num;
    
    // User input
    std::cout << "Enter x (between -1 and 1): ";
    std::cin >> num;

    // 1. Calculation using your custom method
    double my_result = custom_log(num);
    std::cout << "\nYour custom_log(1 + " << num << "): " << my_result << std::endl;

    // 2. Calculation using the standard library
    double math_result = std::log(1.0 + num); 
    std::cout << "Standard std::log(1 + " << num << "): " << math_result << std::endl;

    // 3. Calculating the difference (error margin)
    double difference = absolute_value(my_result - math_result);
    std::cout << "Difference (error): " << difference << std::endl;

    return 0;
}

