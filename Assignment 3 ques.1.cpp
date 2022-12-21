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
        cout<<"Element not found\n";
    }
}

int main()
{
    int n,i,x;
    cout<<"Enter the number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched\n";
    cin>>x;
    linearSearch(arr, n, x);
    return 0;
}