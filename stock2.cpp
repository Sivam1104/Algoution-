#include<iostream>
using namespace std;

void stock(int *arr,int n){
	
	
	int max_profit =0;
	int sel = 0;
	int buy = 0;
	 for(int i =0;i<n;i++){
	 	for(int j =i;j<n;j++){
	 	   int 	profit =  arr[j]-arr[i];
	 	    
	 	    if(profit>max_profit){
	 	    	
	 	    	max_profit = profit;
	 	    	 buy = i;
	 	    	 sel = j;
			 }
	 	   
		 }
	 	
	 }
	 cout<<"buy at "<<" "<<arr[buy]<<" "<< "sell at day"<<" "<<arr[sel]<<" "<<"profit is"<<" "<<max_profit;
}

int main(){
	
	int arr[8] = {7,1,5,8,6,4};
	int n =8;
	
	stock(arr,n);
 }