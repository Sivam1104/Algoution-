#include <iostream>
using namespace std;

void sliding_window(int *arr, int n) {
	int Max_sum,k;
	cout<<"enter the number of slides"<<endl;
	cin>>k;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
        	   int sum =0;
            if ((j - i+1) == k) { 
                for (int k = i; k <= j; k++) {
                	
                    cout << arr[k] << " ";
                    sum += arr[k];
                    Max_sum = max(Max_sum,sum);
                }
                cout << endl;
            }
        }
    }
    cout<<endl;
    cout<<Max_sum;
}

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};   
    sliding_window(arr, 8);                 
    return 0;
}
