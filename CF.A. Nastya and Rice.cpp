
#include<iostream>
using namespace std;
int main()
{
   int a,b,c,d,n,t,x1,x2,x3,x4;
   cin>>t;
   while(t--)
  {
    cin>>n>>a>>b>>c>>d;

      x1 = (a-b)*n;
      x2 = (a+b)*n;
      x3 = c-d;
      x4 = c+d;

      if(x2<x3 || x4<x1)
      {
          cout<<"NO"<<endl;

      }
      else
      {
          cout<<"YES"<<endl;
      }


  }


return 0;

}
