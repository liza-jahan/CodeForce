#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
 return a?gcd(b%a,a):b; }
int main()
{
   int a ,b,c,n=0,v=0,x,y;
   cin>>a>>b>>c;
  while(c>0)
  {
  if(n==0)
  {
    x = gcd(a,c);

    c-=x;
     n=1;

  }
  else {
    y =gcd(b,c);
    c-=y;
    n =0;
  }


   }
   if(n==1)
    {
        cout<<"0";
    }
  else
  {
      cout<<"1";
  }


}
