#include<iostream>
using namespace std;

void print(int a[],int n){

	for(int i=0;i<n;i++){
	    cout<<a[i]<<" ";	
	    
   }
   cout<<endl;
}
void merge(int a[],int mid ,int low,int high){
	int i,j,k,b[100];
	i = low;
	j = mid+1;
	k = low;
	while(i<=mid and j<=high){
		if(a[i]<a[j]){
			b[k]=a[i];
			i++;
			k++;
       }
		else{
	
			b[k]=a[j];
			j++;
			k++;
		}
	}
	while(i<=mid){
		b[k]=a[i];
		k++;
		i++;
	}
		while(j<=high){
		b[k]=a[j];
		k++;
		j++;
	}
	for(int i=low;i<=high;i++){
		
		a[i]=b[i];
	}
}
void merge_sort(int a[],int low,int high){
	int mid;
	if(low<high){
		mid =(low+high)/2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,high);
		merge(a,mid,low,high);
		
	}
}

int main(){
	
  int 	a[] ={-234,0,19,1,4,12,14,18,9,-12};
  int n= 7;
   
   print(a,n);
   cout<<endl;
   merge_sort(a,0,9);
   
   print(a,n);
   return 0;
}