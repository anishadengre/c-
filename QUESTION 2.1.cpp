#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"enter value of n";
    cin>>n;
    for(i=2;i<=n;i=i+2) // 2 <= i<=n
    sum=sum + i;
    cout<<"sum of"<<n<<"terms is ="<<sum;
    return 0;

}
