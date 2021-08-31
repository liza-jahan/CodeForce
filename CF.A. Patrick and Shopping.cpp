#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,c,d,x,y,z,u,v,t,h;
    cin>>a>>b>>c;
    d = a+b+c;
    x = 2*a+2*b;
    y = 2*b+2*c;
    u = 2*a+2*c;
    v = min(d,x);
    t = min(v,y);
    h = min(t,u);

    cout<<h<<endl;


return 0;

}
