#include <iostream>

int main() {
    const double fathom_in_m = 2.16;
    int fathom;
    std::cin >> fathom;

    double meter = fathom * fathom_in_m;
    std::cout << meter << std::endl;
    return 0;
}
