
#include<iostream>

using namespace std;
int main()
{
 int t,a,b,c,d,n,s;
 cin>>t;
 while(t--)
  {
   cin>>a>>b>>n>>s;

    d  = min(s/n,a) ;
    d = s-(d*n);
    if(d<=b)
      {
          cout<<"YES"<<endl;
      }

    else
    {
        cout<<"NO"<<endl;
    }

  }


return 0;

}
