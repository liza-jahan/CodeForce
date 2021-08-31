#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,c,d,t,x,y,sum=0;

   cin>>t;
   while(t--)


   {
    cin>>a>>b>>c;


    if(b==0)
       {
           cout<<"0"<<endl;
       }
     else if(a/c>=b)
     {
         y=b;
         cout<<y<<endl;

     }
   else if(b-a/c>=c-1)
   {
     x=a/c;
     y = ceil((1.0*b-a/c)/(1.0*c-1)) ;
     sum = x-y;
     cout<<sum<<endl;
    }
 else
 {
     x = a/c-1;
     cout<<x<<endl;
 }

   }
    return 0;

}
