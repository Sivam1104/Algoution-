#include<iostream>
using namespace std;

int main(){
	
	int arr[6] ={2,10,3,4,6,7};
	int n = 6;
	int count = 0;
	
	for(int i=0;i<n;i++){
	      for(int j=i+1;j<n;j++){
	      	    
	      	    if(arr[i] > arr[j] and i <j){
				   
				     count++;   
				}
	      	
		  }
		  
		   	
     }
     cout<<count;
}