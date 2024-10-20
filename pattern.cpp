#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	for(int i =n;i>0;i--){
	   for(int j=i;j<=n;j++){
	   	cout<<"*"<<" ";
	   }	
	   cout<<endl;
	}
	cout<<endl;
	for(int i =0;i<n;i++){
	   for(int j=i;j<n;j++){
	   	    if( i==j){
	   	cout<<"*";
	   }
	   	 else{
	   	 	cout<<" ";
			}
	   }

	   cout<<endl;
}
}
	
	

