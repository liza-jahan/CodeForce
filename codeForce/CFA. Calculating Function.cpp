#include<iostream>
using namespace std;
int main()
{
   long long a,i,sum=0,sum2 =0,sum1=0;
   cin>>a;
   for(i=1;i<=a;i++)
    { if(i%2==1)
       {
          sum = sum-i;
       }
      else{
        sum1 = sum1+i;
      } }

      sum2=sum1+sum;


   cout<<sum2<<"\n";
return 0;

}
