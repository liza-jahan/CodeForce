#include<iostream>
using namespace std;
int main()
{
   int a,b,n,m,ans=0;
   cin>>n>>m;
   for(a=0;a*a<=n && a<=m;a++)
    {
      b = n-a*a;
      if(a+b*b==m)
      {
          ans=ans+1;
      }
    }
     cout<<ans;


return 0;

}
