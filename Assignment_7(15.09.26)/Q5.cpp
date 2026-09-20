/*
5. Write a C++ program to enter length in centimeters and convert it into meters and kilometers. 
*/

#include <iostream>

void convertCm(float cm, float &meters, float &km) {
    meters = cm / 100.0f;
    km = cm / 100000.0f;
}

int main() {
    float cm, m = 0, k = 0;

    std::cout << "Enter length in centimeters: ";
    std::cin >> cm;
    convertCm(cm, m, k);

    std::cout << "Length in Meters: " << m << " m" << std::endl;
    std::cout << "Length in Kilometers: " << k << " km" << std::endl;

    return 0;
}
