/*
3. Write a C++ program to swap the first and last digits of any number. 
*/
#include <iostream>
#include <cmath>
int swapFirstAndLast(int num) {
  
    if (num < 10 && num > -10) {
        return num;
    }

    int lastDigit = num % 10;
    int digits = (int)log10(num); 
    int firstDigit = num / pow(10, digits);
    int swappedNum = lastDigit * pow(10, digits);
    swappedNum += num % (int)pow(10, digits);
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    return swappedNum;
}

int main() {
    int num;
    std::cout << "Enter any number: ";
    std::cin >> num;

    int result = swapFirstAndLast(num);
    
    std::cout << "Original number: " << num << std::endl;
    std::cout << "Number after swapping: " << result << std::endl;

    return 0;
}

