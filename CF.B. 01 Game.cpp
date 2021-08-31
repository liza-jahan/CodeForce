#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

  int a,i,b,d;
  string  s;

   cin>>a;
   while(a--)
   {
    cin>>s;
    int n=0,x=0;
   for(i=0;i<s.length();i++)
   {
     if(s[i]=='0')
       {
           n++;
       }
      else

      {
          x++;
      }}
     b = min(n,x);
     if(b%2==0)
     {
         cout<<"NET"<<endl;
     }

     else
     {
         cout<<"DA"<<endl;
     }
   }

}
