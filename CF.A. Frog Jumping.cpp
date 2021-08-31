#include<iostream>
using namespace std;
int main()
{
long long int  a,b,c,t,sum=0,sum2=0,i;
cin>>t;
while(t--)
{

  cin >>a>>b>>c;

    if(c%2==0)
    {
        sum = ((a-b)*c/2);

    }
   else{
      sum = a+((a-b)*(c/2));
   }


    cout<<sum<<endl;

}
return 0;

}
