#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
    int r1, r2; 
    float p1;
    cout << "Enter the Initial Reading of Odometer(with Full Tank):- ";
    cin >> r1;
    cout << "Enter the Final Reading of Odometer:- ";
    cin >> r2;
    cout << "Enter the number of Litres of Petrol filled again to full the tank:- ";
    cin >> p1;
    cout << "The Milage of the Car is:- " << (r2-r1)/p1 << " kmpl";
return 0;
}



