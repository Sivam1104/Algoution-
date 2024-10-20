#include<iostream>
#include<climits>
using namespace std;

int main(){
	
	int m;
	cout<<"enter the size of array"<<endl;
	cin>>m;
	int a[m];
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cout<<" "<<a[i];
	}
	int current_sum =0;
	int max_sum =INT_MIN;
	for(int i=0;i<m;i++){
		current_sum += a[i];
		if(current_sum<0){
			current_sum = 0;
		}
		max_sum=max(max_sum,current_sum);
	}
	cout<<max_sum;
	return 0;
}