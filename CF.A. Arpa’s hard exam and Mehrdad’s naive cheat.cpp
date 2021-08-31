#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long   int a,b,c;
 cin>>a;
 if(a%4==0 && a!=0)
 {
     b = 4;

 }
 else
 {
     b =a%4;
 }
 c = pow(8,b) ;
 c=c%10;


  cout<<c;
return 0;

}
