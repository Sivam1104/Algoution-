#include <iostream>
using namespace std;

int isHappyNumber(int num) {
    int rem, sum = 0;
    while (num > 0) {
        rem = num % 10; 
        sum += rem * rem; 
        num /= 10; 
    }

    return sum;
}

int main() {
    int num = 82;
    int result = num;

    while (result != 1 && result != 4) {
        result = isHappyNumber(result);
    }
    if (result == 1) {
        cout << num << " is a happy number" << endl;
    }
    else if (result == 4) {
        cout << num << " is not a happy number" << endl;
    }

    return 0;
}

