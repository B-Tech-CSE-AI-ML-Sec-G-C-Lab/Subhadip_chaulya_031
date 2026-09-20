/*
4. Write a C++ program to enter two angles of a triangle and find the third angle. 
*/

#include <iostream>

float findThirdAngle(float a1, float a2) {
    return 180.0f - (a1 + a2);
}

int main() {
    float angle1, angle2;

    std::cout << "Enter the first angle: ";
    std::cin >> angle1;

    std::cout << "Enter the second angle: ";
    std::cin >> angle2;

    float angle3 = findThirdAngle(angle1, angle2);

    std::cout << "The third angle is: " << angle3 << " degrees" << std::endl;

    return 0;
}
