#include<iostream>
using namespace std ;
int main ()
{
    int n;
    cout<<"enter the elements in array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min,max;
    min=arr[0];
    max=arr[0];
    for(int j=0;j<n;j++){
        if(max<arr[j]){
            max = arr[j];

        }
        if(min>arr[j]){
            min =arr[j];
        }
    }
    cout<<"maximum: "<<max<<endl;
    cout<<"minimum: "<<min<<endl;
    return 0;
    
}