#include<iostream>
using namespace std;
 int main(){
int a[20] , i ,count=0 ,n=20;
cout<<"enter the elements in the array"<<endl;
for(i=0;i<n;i++){
   cin>>a[i];
   if(a[i]>0){
       a[count++]=a[i];
   }
}
while(count<n){
    a[count++] =0;
}
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;
}