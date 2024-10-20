#include<iostream>
using namespace std;


int countFrequency(int arr[], int size, int number) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int number = 2;

    int frequency = countFrequency(arr, size, number);
    cout << "The number " << number << " appears " << frequency << " times in the array." << endl;

    return 0;
}
