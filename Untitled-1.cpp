#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
    int sal, da_mi, m_nm, metro, non_metro;
    cout << "Enter Your Basic Salary:- ";
    cin >> sal;
    da_mi = (sal * 0.34);
    cout << "Which City do you live in \n For Metro Type '1' \n For Non Metro Type '2' \n ";
    cin >> m_nm;
    if (m_nm == 1)
    {
        metro = (sal * 0.08);
        cout << "Your Net Salary is:- " << sal + da_mi + metro;
    }
    
    else if (m_nm == 2)
    {
        non_metro = (sal * 0.16);
        cout << "Your Net Salary is:- " << sal + da_mi + non_metro;
    }

    else 
    {
        cout << "Your Input for City is Wrong"; 
    }
return 0;
}