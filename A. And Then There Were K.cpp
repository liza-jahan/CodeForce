#include<iostream>
using namespace std;
int main()
{
int a,b,t;
cin>>t;
while(t--)
{ long long int n,ans=1;
 cin>>n;
 while(ans<=n)

 {
     ans=  ans*2;
 }

ans =ans/2;
ans--;
cout<<ans<<endl;





}

return 0;

}
