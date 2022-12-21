#include<iostream>
using namespace std;

 int main(){
 int a[50][50] ,n , i , j, sum=0 ,avg;
 cout<<"enter the size of the array"<<endl;
 cin>>n;
 
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cout<<"enter the element in "<<i<<j<<endl;
        cin>>a[i][j];
        sum=sum+a[i][j];
        avg=sum/n;
    }
 }
 cout<<"the sum is "<<sum<<endl;
 cout<<"the average is "<<avg<<endl;
return 0;
}