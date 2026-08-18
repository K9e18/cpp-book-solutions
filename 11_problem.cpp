#include <iostream>

double mS_to_kmH(double speed) {
    return speed * 3.6;
}

int main() {
    double kmH_speed;
    std::cin >> kmH_speed;
    
    double mS_speed = mS_to_kmH(kmH_speed);
    std::cout << mS_speed << std::endl;
    
    return 0;
}
