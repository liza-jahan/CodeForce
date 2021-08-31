#include<iostream>
using namespace std;
int main()
{
 int a,i,t,sum=0;
 cin>>a;
 for(i=1;i<=a;i++)

  {
   sum = sum+((a-i) *i);
  }
  sum =sum+a;
  cout<<sum<<endl;

}
