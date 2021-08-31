#include<iostream>
using namespace std;
int main()
{
 int t;
 long long  n,a;
 cin>>t;
 while(t--)

  {
    cin>>n;

  if(n%2050 !=0 )
{
   cout<<"-1"<<"\n";
}

  else
    {
   n= n/2050;
   long long ans=0;
  while(n!=0)
{
    a=n%10;
   ans = ans +a;
    n= n/10;

}
 cout<<ans<<"\n";
  }

  }
    return 0;
}
