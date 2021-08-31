#include<iostream>
using namespace std;
int main()
{

 long long int a,b,c,d,sum=0;
 int  t;
 cin>>t;
 while(t--)
 {
   cin>>a>>b;

   sum=a+b;
 if(a>=b*b)
  {
      if(sum%2 !=0)
   {
       cout<<"NO"<<endl;
   }
  else
  {
      cout<<"YES"<<endl;
  }
  }
  else
  {
      cout<<"NO"<<endl;
  }


 }
 // cout<<"\n" ;


return 0;
}
