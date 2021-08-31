#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  long long int a,c,b,d,n,p;
  cin>>t;
  while(t--)
   {
   cin>>a>>b>>c;

   n = max(a,b);
   p = min(a,b);
   if(n<=p*(c+1))
    {
        cout<<"YES"<<"\n";
    }


   else
   {
       cout<<"NO"<<"\n";
   }

   }


return 0;

}
