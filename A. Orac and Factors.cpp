#include<iostream>
using namespace std;
int main()
{
    int t;

 cin>>t;
 while(t--)
  {
        long long  int a,b,c,d,i,j,m;
   cin>>a>>b;
   if(a%2==1)

  {
  bool ans =0;
   for(j=2;j*j<=a;j++)
   {

       if(a%j==0)
      {
       a=a+j;
       ans=1;
       break;
       }
   }
    if(ans==0)
        a=a+a;
    cout<<(a+(b-1)*2)<<endl;

  }
  else
  {

   cout<<(a+(b*2))<<endl;

  }
  }
return 0;

}
