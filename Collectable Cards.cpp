#include<iostream>
using namespace std;
int main()
{
  int t,a,b,x,y,c;
  cin>>t;
  while(t--)
 {
 cin>>a>>b;
 if(b>a)
 {
  x=b;
  y=a;
 }
 else
 {
  x= a;
  y=b;
 }
 while(x%y !=0)
 {
  c = x%y;
  x=y;
  y = c;



 }

cout<<y<<"\n";
 }


return 0;
}
