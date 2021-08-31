
#include<iostream>
using namespace std;
int main()
 {

    long long  int t,c,d,i,sum=0;
    cin>>t;
    while(t--)
   {long long  int b;
       cin>>b;

   long long  int ans=0,j;
    for(i=1;i<=9;i++)

    { for(j=i;j<=b;)
      {
        ans ++;
         j = (j*10)+i;
          }


    }
    cout<<ans<<"\n";
}
return 0;

}
