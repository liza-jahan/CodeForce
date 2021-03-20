#include<iostream>
using namespace std;

int main()
{

    long long a,b,c,ans;
    cin>>a>>b>>c;


    {
        ans = a+b+c;

        ans = max(ans,a*(b+c));
        ans = max (ans,a*b*c);
        ans = max (ans ,(a+b)*c);
        ans = max (ans,a+(b*c));
        ans = max (ans,(a*b)+c);


    }

   cout<<ans<<"\n";



  return 0;
}
