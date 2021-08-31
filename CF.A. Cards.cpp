#include<iostream>
using namespace std;
int main()
{
  int a,n=0,x=0;
   string s;
  cin>>a;
   cin>>s;
   for(int i=0;i<s.length();i++)

  {
      if(s[i]=='n')
    {
        n++;
    }
  else if(s[i]=='z')
  {
      x++;
  }
  }
  while(n++)
   {
       cout<<"1"<<" ";
   }
  while(x++)
  {
      cout<<"0"<<" ";
  }






}
