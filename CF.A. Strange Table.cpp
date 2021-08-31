#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

 int t;
 cin>>t;
 while (t--)
 {
     long long int a,n,b,m,x,cont,d=0;
  cin>>n>>m>>x;
   double f,k;

   k = n;
   f = ceil(x/k);
  a = x%n;
  if(a==0)
  {
   a =n;

  }
 d = (a-1)*m;

  cont = d+f;
  cout<<cont<<"\n";

 }



return 0;
}
