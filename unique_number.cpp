#include <iostream>
using namespace std;

void printUniqueNumbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
    
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j] && i != j) {
                isUnique = false;
                break;
            }
        }
        
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique numbers in the array: ";
    printUniqueNumbers(arr, size);
    cout << endl;

    return 0;
}
