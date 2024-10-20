#include<iostream>
#include<algorithm>
using namespace std;

void anagram(string a)
{
  string compare;
  cout<<"enter the string to compare"<<endl;
  cin>>compare;
  
  
  sort(a.begin(),a.end());
  sort(compare.begin(),compare.end());
  
  if(a == compare){
  	
  	cout<<"Anagram"<<endl;
  }
  else{
  	cout<<"not Anagram"<<endl;
  }
  
	
}
int main()
{
 string a;
 cout<<"enter the string"<<endl;
 cin>>a;
 
 anagram(a);

}
