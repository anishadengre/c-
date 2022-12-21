#include<iostream>
using namespace std;
int ackermann(int m, int n)
{
if(m==0)
{
return n+1;
}
else if((m!=0) && (n==0))
{
return ackermann(m-1,1); 
}
else if((m!=0) && (n!=0))
{
return ackermann(m-1, ackermann(m, n-1)); 

    }
}

int main()
{
int m, n, result;
cout << "Enter value of m between 1 to 4: ";
cin >> m;
cout << "Enter value of n between 1 to 10: ";
cin >> n;
result=ackermann(m,n);
cout << "The value of A("<<m<<","<<n<<"): " << result;
return 0;
}