#include<iostream>
using namespace std;
int main()
{
  int a[1001],b,t,c,d,e,f,i;
  cin >>t;
  while(t--)
  {
  cin>>b;
  for(i=0;i<b;i++)

  {
      cin>>a[i];
  }

 for(i=1;i<=b;i++)
 {
 if(i%2 !=0)
 {
     cout<<a[i];
 }
else
{
    cout<<a[b-i-1];
}


 }







  }









}
