#include<iostream>
using namespace std;

int main(){
	
	int num;
	cout<<"enter the number"<<endl;
	cin>>num;
	
	int arr[100] = {1,2,3,2,4,5,8,5};
	int n =100;
	
	for(int i =0;i<n;i++){
		
		if(arr[i] == num){
			
			cout<< i << " "<<endl;
			break; 
		}
		else{
		cout<<"not found";
		break;
	
		}
		
	}
}