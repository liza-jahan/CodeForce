#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

 int t;
 cin>>t;
 while(t--)

{
    long long int a,i,count=0,n=1,sum=0,b;
    long long int x[10000001];
    cin>>a>>b;
    for(i=0;i<a;i++)
    {
      cin>>x[i];
    }
    sort(x,x+a);
    for(i=a-1;i>=0;i--)
     {
      sum +=x[i];
      if((sum/(n*1.0))>=b)
      {
          count++;
          n++;
      }
      else
      {
          break;
      }
         }
    cout<<count<<endl;




}

}
