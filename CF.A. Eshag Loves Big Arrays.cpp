
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,a,c,i;

   cin>>t;
   while(t--)
   {
   cin>>a;
   int x[a+1],m;
   for(i=0;i<a;i++)
   {
       cin>>x[i];
   }
   sort(x,x+a);
    m = x[0];
    int b=1;
    for(i=1;i<a;i++)
     {

         if(x[i]== m)
         {
             m=x[i];
             b ++;
         }

     }
    cout<<a-b<<"\n";

       }
    return 0;

}
