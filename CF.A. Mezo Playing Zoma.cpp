#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 string a;
 int t,n=0,d=0,i;
 cin>>t;
  cin>>a;
  for(i=0;i<t;i++)
   {
    if(a[i]=='L')
    {
        n++;
    }
    else
   {
      d++;
    }
   }
 cout<<n+d+1<<endl;


 return 0;
}
