
#include<iostream>
using namespace std;
int main()
{ int x,y,n,m,sum=0,i;
 string  a ,b;
  cin>>x>>a>>b;

 for(i=0;i<x;i++)
 {

     sum += min(10-abs(a[i]-b[i]),abs(a[i]-b[i]));
       }

   cout<<sum;

}
