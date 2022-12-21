#include<iostream>
using namespace std;
int main()
{
    int unit_consumed;
    float bill;
    int i;
    for (i=1;i<=5;i++)
    {
        cout<<"enter number of unit_consumed";
        cin>>unit_consumed;
        if (unit_consumed<=100)
        bill=unit_consumed*0.5;
        else if (unit_consumed<100&& unit_consumed<=200)
        bill=50+
        (unit_consumed-100)*0.65;
        else if (unit_consumed>200&& unit_consumed<=300)
        bill=115+
        (unit_consumed-200)*0.75;
        else if(unit_consumed>300&& unit_consumed<=500)
        bill=190+
        (unit_consumed-300)*0.85;
        cout<<"total bill ="<<bill;
        cout<<"/n";
        }
        return 0;

    
}







#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"enter value of n :";
    cin>>n;
    int i;
    for(i=2;i<=n;i=i+2) // 2 <= i<=n
    sum=sum + i;
    cout<<"sum of"<<n<<"terms is ="<<sum;
    return 0;

}

