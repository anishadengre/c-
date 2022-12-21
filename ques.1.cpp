#include<iostream>
using namespace std;
void linearSearch(int arr[], int n, int x)
{
    bool t = false;
    cout<<"The position of element: "<<x<<" is/are in index ";
    for(int i=0;i<n;i++){
        if (arr[i] == x)
        cout<<i<<"\t";
        t = true;
    }
    if(t==false){
        cout<<"Element not found";
    }
}

int main()
{
    int n,i,x;
    cout<<"Enter the number of elements";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched";
    cin>>x;
    linearSearch(arr, n, x);
    return 0;
}