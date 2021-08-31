#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int a,b[13],i,c,sum=0,can=0;
 cin>>a;

   for(i=0;i<12;i++)
    {
     cin>>b[i];
    }
      if(a==0)
    {
        cout<<"0"<<endl;
        return 0;

    }
    sort(b,b+12,greater<int>());

      for(i=0;i<12;i++)
    {
        sum = sum+b[i];
        can ++;
        if(sum>=a)
          break;
    }
   if(sum<a)
    {
        cout<<"-1"<<endl;
    }

   else
   {
       cout<<can<<endl;
   }
 return 0;
}
