
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a[1000]  ,n,m,i,sum=0;
 cin>>n>>m;
 for(i=0;i<n;i++)
  {
      cin>>a[i];
  }

  sort(a,a+n) ;
  for(i=0;i<m;i++)
  {
    if(a[i]<0)
   {

    sum = sum+abs(a[i]);

   }

  }
 cout<<sum<<endl;

return 0;
}
