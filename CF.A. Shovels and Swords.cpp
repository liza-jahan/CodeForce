#include<iostream>
using namespace std;
int main()
{
 int t,a,b,n;
 cin>>t;
 while(t--)

 {

 cin>>a>>b;
 //if(a<b)
 //  swap(a,b);

 if(a>=2*b)
  cout<<b<<endl;
  else
  {
      cout<<(a+b)/3<<endl;
  }

 }
    return 0;
}
