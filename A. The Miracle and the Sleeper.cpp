#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t ;
 cin>>t;
 while(t--)

 {
     long long int a,b,c,x,r;
 cin>>a>>b;


 if(a<(abs(b/2)+1))

     {

   x =(b-1)/2;


     }
   else
   {
       x = b-a;
   }


    cout<<x<<endl;
 }




return 0;
}
