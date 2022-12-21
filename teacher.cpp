#include<iostream>
#include<string>
using namespace std;
class Officer {
    public:
   char grade ;
   char getGrade(){
       return grade;
   }
   void setGrade(char a){
       a=grade;
       
   }
};
class Staff: public Officer {
    public:
  string name ;
  string age ;
  string id;
  string getName(){
      return name; 
  }
  string getAge(){
      return age; 
  }
  string getId(){
      return id; 
  }
  void setName(string n){
     n =  name; 
  }
  void setAge(string a){
      a= age; 
  }
  void setId(string i){
      i= id; 
  } 
      
};
class Teacher: public Staff{
    public:
    string qualification;
    string exy;
    string getQualification(){
    return qualification;
    }
    string getExy(){
        return exy;
    }
    void setQualification(string s){
        s= qualification;
    }
    void setExy(string m){
        m=exy;
    }

};
class Visting: public Teacher{
    public:
    string hour;
    string day;
    string getHour(){
        return hour;
    }
    string getDay(){
        return day;
    }
    void setHour(string s){
        s= hour;
    }
    void setDay(string m){
        m=day;
    }

};
class Regular: public Teacher{
    public:
    string publication;
  
    string getPublication(){
        return qualification;
    }
  
    void setPublication(string s){
        s=publication;
    }
  
};
int main(){
    Regular r ;
    r.setName("Hello Sir");
    cout<<r.getName();
    return 0;
}

