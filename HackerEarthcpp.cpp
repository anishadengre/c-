#include <iostream>
#include <string.h>
#include<conio.h>
using namespace std;


int main() 
{
  char string1[101];
  cin>>string1;
  
  int length;
  
  int flag = 0;

  length = strlen(string1);
  cout << "Length:- " << length ;
  
  for(int i=0;i<length;i++)
  {	
		if(string1[i] != string1[length-i-1])
    {
      flag = 1;
      break;
    }
  }

  if (flag) 
  {
	  printf("\nNO");
  }

  else 
  {
	  printf("\nYES");
  }
return 0;
}
