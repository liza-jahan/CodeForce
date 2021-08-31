#include<iostream>

using namespace std;
int main()
{

 int a,b,c,d,t;
 cin>>t;
 while(t--)
  {
   cin>>a;
   c= a%2020;
   d=a/2020;
   if(c<=d )
    {
        cout<<"YES"<<"\n";
    }

  else
  {
      cout<<"NO"<<"\n";
  }



  }

    return 0;

}
