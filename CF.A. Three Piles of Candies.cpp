
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin >>t;
 while(t--)
 {
 long long  int a,b,x[4] ,i,sum=0;
 for(i=0;i<3;i++)
 {
     cin>>x[i];
     sum = sum+x[i];
 }
  a = sum/2;
  cout<<a<<endl;
 }
 return 0;
}
