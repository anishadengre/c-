#include<iostream>
using namespace std;
int main()
{
    int i,a[50],size,sum=0,avg;
    cout<<"enter the size of the array - ";
    cin>>size;
    cout<<"enter any "<<size<<"element in array : "<<endl;
    for(i=0;i<size;i++)
    {
    cin>>a[i];
    }
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    avg=(sum/size);
    cout<<"sum of the no. is "<<sum<<"average of the no."<<avg<<endl;
    return 0;
}