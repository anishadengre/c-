#include<iostream>
using namespace std;
// code to reverse the element in an array .
 int main(){
 int a[20],i;
 cout<<"enter the elements in the arrray"<<endl;
 for(i=0;i<20;i++){
  cin>>a[i];
 }
 cout<<"the array of reverse order is "<<endl;
 for(i=20;i>=0;i--){
  cout<<a[i]<<endl;   
 }
return 0;
}