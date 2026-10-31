#include <cmath>
#include <iostream>

int main() {
    double a, b, c;

    std::cout << "enter a value: ";
    std::cin >> a;
    
    std::cout << "enter b value: ";
    std::cin >> b;

    std::cout << "enter c value: ";
    std::cin >> c;

    double x1 = ((-b) + sqrt((b*b) - 4*a*c)) / (2*a);
    double x2 = ((-b) - sqrt((b*b) - 4*a*c)) / (2*a);

    std::cout << "\nThe values of X are:\n" << x1 << "  or  " << x2 << std::endl;
    return 0;
}
