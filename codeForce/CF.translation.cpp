#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   string a,b,c;
   cin>>a>>b;
  reverse(b.begin(),b.end());
    if(a==b)

    {
        cout<<"YES"<<"\n";
    }

else{
    cout<<"NO"<<"\n";
}
return 0;
}
