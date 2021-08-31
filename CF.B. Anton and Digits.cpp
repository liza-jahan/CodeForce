#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,c,d,x,y;
 cin>>a>>b>>c>>d;
 x= min( a, min(c,d));
 a -=x;
 c-=x;
 d-=x;
 y =min(a,b);
 int  sum = (x*256)+(y*32);

cout<<sum<<endl;



 return 0;

}
