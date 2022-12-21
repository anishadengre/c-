#include <iostream>
using namespace std;
int main()
{
    int s3=1,n;
    cout<<"enter n for the sreies n(n-1)(n-2).............1:    ";
    cin>>n;
    while(n>=1)
    {
        s3=s3*n; //product of the series 
        n=n-1;

    }
   cout<<s3;
   return 0;
}