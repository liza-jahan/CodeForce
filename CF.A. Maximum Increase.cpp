#include<iostream>
using namespace std;
int main()
{
   int a,b,c,d,ans=0,i,cou=1;
   long long int x[a+10];
  cin>>a;
  for( i =0;i<a;i++)
   {
       cin>>x[i];
   }

   for(i=1;i<a;i++)
    {
        if(x[i]>x[i-1])
        {
            cou++;
        }
        else{
            ans= max(ans,cou);
            cou=1;
        }
    }
  ans= max(ans,cou) ;
  cout<<ans<<endl;
return 0;
}
