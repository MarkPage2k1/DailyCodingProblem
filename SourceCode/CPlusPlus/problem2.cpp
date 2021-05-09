#include <iostream>

bool isPowerOfFour(long long);

int main() {
    long long number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;
    if (isPowerOfFour(number)) {
        std::cout << "Is a power of four";
    } else {
        std::cout << "Not a power of four";
    }
    return 0;
}

bool isPowerOfFour(long long n) {
    while ((n > 1) && (n % 4 == 0)) {
        n /= 4;
    }
    if (n == 1) return true;
    else return false;
}