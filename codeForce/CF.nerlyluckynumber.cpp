#include<iostream>
#include<cstring>
using namespace std;
int main()
{ int add=0,i,j,x;
  long long n;
  cin>>n;
 while(n!=0)
    {
      if(n%10 ==4 || n%10==7)

        {
            add++;
        }
        n/=10;
        }

    if(add==4 || add==7)

    {
        cout<<"YES"<<"\n";
    }

   else
   {
       cout<<"NO"<<"\n";
   }
  return 0;
}
