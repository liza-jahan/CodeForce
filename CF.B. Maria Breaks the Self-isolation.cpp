#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  long long int a,b,c,x[100000] ,n,i;

   cin>>t;
   while(t--)

  {

    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x[i];
    }
  sort(x,x+n+1);
  for(i=n;i>=1;i--)
 {
   if(i>=x[i])
 break;

     }

  cout<<i+1<<endl;


  }

    return 0;
}
