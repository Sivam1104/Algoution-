#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	int max =arr[0];
	int mx = arr[0];
    for(int i =0;i<n;i++){
           cin>>arr[i];
}
   cout<<endl;
   for(int i =0;i<n;i++){
           cout<<arr[i]<<" ";
}
cout<<endl;
  for(int i =1;i<n;i++){
       if(arr[i]>max){
       	
          max = arr[i];
	   }
	   if(arr[i]<max){
	   	  mx = arr[i];
	   } 	

  }
  cout<<max<<endl;
  cout<<mx<<endl;
}

