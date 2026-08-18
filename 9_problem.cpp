#include <iostream>

int main() {
    const double fathom_in_M = 2.16;
    const int arshin_in_Cm = 72;

    int fathom, arshin;
    std::cin >> fathom;
    std::cin >> arshin;

    double meter = fathom * fathom_in_M;
    double centimeter = arshin * arshin_in_Cm;

    std::cout << meter << "\n" << centimeter << std::endl;
    return 0;
}
