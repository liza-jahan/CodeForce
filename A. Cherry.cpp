#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;

 cin>>t;
 while(t--)
 {
    long long int n,i,j,x,y,max=0;

  cin>>n;
  long long int a[n];
  for(i=0;i<n;i++)

    {
        cin>>a[i];
    }
  for(i=0;i<n-1;i++)
    {
        x=a[i]*a[i+1];
        if(x>=max)
            max = x;
    }


  cout<<max<<endl;


 }

    return 0;

}
