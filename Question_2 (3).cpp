#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
    int len, wid, m_nm, pcs, total, final_amt, rm_amt;
    cout << "Enter Length of the  House Wall:- ";
    cin >> len;
    cout << "Enter Width of the  House Wall:- ";
    cin >> wid;
    cout << "We have 2 types of Tiles Available:- \n 1)Dimemnsion 2X2 ft. \n Price per Tile = 350/- \n To select this on Type '1' \n 2)Dimemnsion 4X4 ft. \n Price per Tile = 550/- \n To select this on Type '2' \n ";
    cin >> m_nm;

    if (m_nm == 1)
    {
        pcs = (len*wid)/4;
        total = (pcs * 350);
    }
    
    else if (m_nm == 2)
    {
        pcs = (len*wid)/16;
        total = (pcs * 550);
    }
    else 
    {
        cout << "Enter a correct input";
    }

    if (30000 <= total <= 50000)
    {
        final_amt = total + (total * 0.05); 
        cout << "THE TOTAL AMOUNT PAYABLE IS" << final_amt;
    }

    else if (50000 <= total)
    {
        rm_amt = total - 50000;
        final_amt = rm_amt + (rm_amt * 0.05); 
        cout << "THE TOTAL AMOUNT PAYABLE IS = " << final_amt;
    }
return 0;
}
    










