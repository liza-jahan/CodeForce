#include<iostream>
#include<bits/stdc++.h>
//#include<string>
using namespace std;
int main()
{
int a,n=0,x=0,i,t;
string  arr,crr,brr;
cin>>t;
cin>>arr;
for(i=1;i<t;i++)
{
  cin>>crr;
  if(arr==crr)

    {
        n++;
    }

    else
    {
        brr=crr;
        x++;
        }
}
 if(n>=x)
 {
     cout<<arr<<endl;
 }
 else
 {
     cout<<brr<<endl;
 }

    return 0;

}
