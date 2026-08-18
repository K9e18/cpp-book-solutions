#include <iostream>

double KmH_to_KmS(double speed) {
    return speed / 3.6;
}

int main() {
    double km_h;
    std::cin >> km_h;

    double km_s = KmH_to_KmS(km_h);
    std::cout << km_s << std::endl;
    
    return 0;
}
