#include<iostream>
using namespace std;
int main()
{ bool n=0;
  int t,a,b,c;
  cin>>t;
  while(t--)
  {

   cin>>a>>b;

   if(a!=b)
   {

n =1;
break;
   }
  }
  if(n)
{
    cout<<"Happy Alex";
    //return 0;
}
  else

  {

    cout<<"Poor Alex";
  }
 return 0;
}
