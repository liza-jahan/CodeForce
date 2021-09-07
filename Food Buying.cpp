
#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
 int a,ans=0,d,b,c;
  cin>>a;
  while(1)
  {
   d =(a/10)*10;
   ans = ans + d;
   b = a-d;

    a = (a/10)+b;
    if(a<10)
    {
     ans = ans+a;
     break;


    }
  }
   cout<<ans<<"\n";
  }
  return 0;

}
