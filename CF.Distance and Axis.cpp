#include<iostream>
using namespace std;
int main()
{
 int a,b,c,d,t,h,g;
 cin>>t;
 while(t--)
 {
  cin>>a>>b;
  if(a==b)
  {
      cout<<"0"<<"\n";
  }

 else if(b>a)
  {
      cout<<b-a<<"\n";
  }

 else
 {

      if((a-b)%2==0)
    {
     cout<<"0"<<"\n";
    }
    else
    {

        cout<<"1"<<endl;
    }


 }

 }


 return 0;
}
