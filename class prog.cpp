#include<iostream>
using namespace std;
class student{
  public:  
string name;
int age;
bool gender;
    void printinfo(){
     cout<<"enter the name"<<endl;
     cout<<name<<endl;
     cout<<"enter the age"<<endl;
     cout<<age<<endl;
     cout<<"enter the gender"<<endl;
     cout<<gender<<endl;
}
};
int main(){
 student arr[3] ;
 for( int i=0;i<3;i++){
     cout<<"enter the name";
     cin>>arr[i].name;
     cout<<"enter the age";
     cin>>arr[i].age;
     cout<<"enter the gender";
     cin>>arr[i].gender;

 }
 for( int i=0;i<3;i++){
  arr[i].printinfo();
 }

return 0;
}