#include <iostream>
using namespace std;

int EquilibriumIndex(int *arr, int n) {
    int totalSum = 0, leftSum = 0;

    
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
     }

    
    for (int i = 0; i < n; i++) {
        totalSum -= arr[i];  

        if (leftSum == totalSum) {
            return i;  
     }

        leftSum += arr[i];  
    }

    return -1;  
}

int main() {
    int arr[] = {1, 3, 5, 2, 2};
    int n = 5;

    int e  = EquilibriumIndex(arr, n);
	return 0;
}
