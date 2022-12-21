#include<iostream>
using namespace std;
int main()
{
    int weight;
    cout<<"enter the weight"<<endl;
    cin>>weight;
    if (weight>=18 && weight<=40)
    {
        cout<<"underweight"<<endl;
    }
    else if (weight>=41 && weight<=71)
    {
        cout<<"normal"<<endl;
    }
    else if (weight<18)
    {
        cout<<"underweight"<<endl;
    }
    else 
    {
        cout<<"overweight"<<endl;
    }
        
   }