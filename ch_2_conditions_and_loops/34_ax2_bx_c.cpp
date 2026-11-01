#include <cmath>
#include <iostream>

double discrim(double a, double b, double c) {
    return b*b - 4*a*c;
}

double get_x1(double a, double b, double c) {
    return (-b + sqrt(discrim(a, b, c))) / (2*a);
}

double get_x2(double a, double b, double c) {
    return (-b - sqrt((discrim(a, b, c))) / (2*a));
}

int main() {
    double a, b, c;

    std::cout << "enter a value: ";
    std::cin >> a;
    
    std::cout << "enter b value: ";
    std::cin >> b;

    std::cout << "enter c value: ";
    std::cin >> c;

    double x1 = get_x1(a, b, c);
    double x2 = get_x2(a, b, c);

    std::cout << "\nThe values of X are:\n" << x1 << "  or  " << x2 << std::endl;
    return 0;
}
