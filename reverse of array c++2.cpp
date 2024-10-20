#include<iostream>
using namespace std;


void print_array(int n,int *a){
	for(int i=0;i<n;i++){
  	cout<<a[i]<<" ";
  }
}


int main()
{
  int n; 
  cout<<"size of array"<<endl;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
  	cin>>a[i];
  }
   print_array(n,a);
}
 