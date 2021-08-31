#include<iostream>
using namespace std;
int main()
{
  int n,m,a,i,b;
  cin>>n>>m;

     for(i=(n+1)/2;i<=n;i++)
       {

        if(i%m==0)
     {
      cout<<i<<endl;
      return 0;
     }
  }
     cout<<"-1"<<"\n";



return 0;
}
