#include<iostream>
using namespace std;

 int main(){
     int choice ,a ,b ,c;
 cout<<"press 1 for  addition,2 for multiplication,3 for sub and 4 for div"<<endl;
 cin>>choice;
 switch(choice){
     case 1:
     cout<<"enter the values of a and b"<<endl;
     cin>>a>>b;
     c=a+b;
     cout<<"the addition of a and b is "<<c<<endl;
     break;

     case 2:
     cout<<"enter the values of a and b"<<endl;
     cin>>a>>b;
     c=a*b;
     cout<<"the multiplication of a and b is "<<c<<endl;
     break;

     case 3:
     cout<<"enter the values of a and b"<<endl;
     cin>>a>>b;
     c=a-b;
     cout<<"the sub multiplication of a and b is "<<c<<endl;
     break;

     case 4:
     cout<<"enter the values of a and b"<<endl;
     cin>>a>>b;
     c=a/b;
     cout<<"div of a and b is "<<c<<endl;
     break;
     
     default:
     cout<<"invalid case"<<endl;


      }
return 0;
}