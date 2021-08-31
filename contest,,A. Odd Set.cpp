#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
  {
      int c=0,n,sum=0,i,x[100];
  cin>>a;
     for(i=1;i<=a*2;i++)
      {
          cin>>x[i];
          sum +=x[i];
       c++;
      }

    if(sum%2==0)
    {
     b= sum/2;
     if(b%2!=0)
      {
         cout<<"YES"<<"\n";
    }
     else
     {
         cout<<"NO"<<"\n";
     }
        }
  else
      {
          cout<<"YES"<<"\n";
      }



  }

    return 0;
}
