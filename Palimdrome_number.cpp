#include <iostream>
using namespace std;

bool isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;
    int remainder;

    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    
    return originalNumber == reversedNumber;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << "The number " << number << " is a palindrome
}
}