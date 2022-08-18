#include<iostream>
using namespace std;
int main()
{
   int n,t,f,i,total,result=-2000000000;
   cin>>n>>t;

 while(n--)

 {
    cin>>f>>i;
    total=f;

    if(i>t)
     total-=(i-t) ;
     result=max(total,result);
 }
     cout<<result;


    return 0;
}
