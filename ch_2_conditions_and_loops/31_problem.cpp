// Ax = B

#include <iostream>
#include <cmath>

double find_x(double a, double b) {
    if (a != 0) {
        return b / a;
    }
    else if (b != 0) {
        return NAN;
    }
    else {
        return INFINITY;
    }
}

int main() {
    double a, b;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;

    double x = find_x(a, b);

    if (std::isnan(x)) {
        std::cout << "Error: No solutions!" << std::endl;
    } else if (x == INFINITY) {
        std::cout << "Any number is a solution!" << std::endl;
    } else {
        std::cout << "x = " << x << std::endl;
    }

    return 0;
}

