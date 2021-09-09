#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
 int a ,b,c,d,k,t;
 cin>>t;
 while(t--)
 {
 cin>>k;

   c = __gcd(k,100-k) ;
    d=k/c;
    b= (100-k)/c;
    a=b+d;

    cout<<a<<endl;

 }

return 0;

}
