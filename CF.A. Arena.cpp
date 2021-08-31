#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)

   {
      int a,b,x[100] ,i,count=0,m=INT_MAX;
      cin>>a;
      for(i=0;i<a;i++)
       {
           cin>>x[i];
           m = min(x[i],m);
       }
         for(i=0;i<a;i++)
       {
        if(x[i] !=m)

         {
             count++;
         }
           }
       cout<<count<<endl;



   }

return 0;

}
