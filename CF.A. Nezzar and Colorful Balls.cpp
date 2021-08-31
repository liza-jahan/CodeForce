#include<iostream>
using namespace std;
int main()
{
 int a,b,t;

 cin>>t;
 while(t--)
 {
  int  c,d,i,j,x[100];
 cin>>a;
 for(i=0;i<a;i++)
  {
      cin>>x[i];
  }
   int ans=0;
   for(i=0;i<a;i++)
   {
       int n=0;
    for(j=0;j<a;j++)
     {
     if(x[i]==x[j])
       {
           n++;
       }
        ans = max(ans,n);
         }

   }




    cout<<ans<<"\n";

 }

    return 0;

}
