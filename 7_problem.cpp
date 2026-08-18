#include <iostream>

int main() {
    const double km_in_mile = 1.609344;
    const double feet_in_m = 3.28084;
    int km, m;
    std::cin >> km;
    std::cin >> m;

    double miles = km * km_in_mile;
    double feets = m * feet_in_m;

    std::cout << miles << "\n" << feets << std::endl;
    return 0;
}
