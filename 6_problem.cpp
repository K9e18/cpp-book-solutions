#include <iostream>

int main() {
    const double km_in_mile = 1.609344;
    int km;
    std::cin >> km;

    double mile = km * km_in_mile;

    std::cout << mile << std::endl;
    return 0;
}