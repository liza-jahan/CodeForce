#include<iostream>
using namespace std;
int main()
{
   int a=0,b,c,t,n;
   cin>>t;
   while(t--)
 {
  cin>>n;
  if(n==1)
  {
    a=0;
  }
  else if(n==2)

   {
       a=1;
   }

   else if(n==3)
   {
       a=2;
   }
   else if(n%2==0)
   {
       a=2;
   }
  else
  {
    a=3;
  }


  cout<<a<<endl;
 }
  return 0;

}
