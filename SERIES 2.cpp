#include <iostream>
using namespace std;
int main()
{
    int s2=0,n2, b=2;
    cout<<"enter n for the sreies 2+4+8+16.............n:    ";
    cin>>n2;
    while(n2>=b)
    {
        s2=s2+b; //sum of the series 
        b=b*2;

    }
   cout<<s2;
   return 0;
}