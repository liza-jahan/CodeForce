#include<iostream>
using namespace std;
int main()
{
 int a[3],b[3],n,sum=0,sum1=0,sum2=0,i,x,y;
 for(i=0;i<3;i++)
  {
   cin>>a[i] ;
    sum1 =sum1+a[i] ;
  }
   for(i=0;i<3;i++)
  {
   cin>>b[i] ;
     sum2=sum2+b[i] ;
  }
   cin>>n;
   if(sum1%5==0)
   {
   x=sum1/5;
   }
   else
   {
     x=(sum1/5)+1;
   }
    if(sum2%10==0)
   {
   y=sum2/10;
   }
   else
   {
     y=(sum2/10)+1;
   }

   sum=x+y;
   if(sum<=n)
   {
       cout<<"YES"<<endl;
   }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
