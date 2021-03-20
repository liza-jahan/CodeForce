#include<iostream>
#include<cmath>
using namespace std;
int main()

{
   long long a,b,ans=0;
   cin>>a;
    if(a%2==1)
    {
     ans = ((a+1)/2)*(-1);
    }
    else{
        ans = a/2;
    }
    cout <<ans<<endl;
   return 0;


}
