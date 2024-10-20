#include<iostream>
using namespace std;


int main()
{
   int arr[100] = {1,2,3,4,4,5,6,7,8};
   int n =100;
   
    bool counted[n] = {false};
   
   for(int i =0;i<n;i++){
   	  if(counted){
   	  	
   	  	 continue;
		}
   	
   	  int count = 1;
   	for(int  j =i+1;j<n;j++ ){
   		  
   		  if(arr[i] == arr[j]){
   		  	 
   		  	 count++;
   		  	 
   		  	 counted[j] =true;
   		  	
			 }
		
   		  
	   }
	   if(count >1){
	   	
	   	cout<<arr[i]<<"the number of duplicates are"<< count;
	   }
   }
   return 0;
   	
	
}
