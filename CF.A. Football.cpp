#include<iostream>
#include<bits/stdc++.h>
int main()
{
int a,n=0,x=0,i,t;
char arr,crr,brr;
cin>>t>>arr;
for(i=0;i<t-1;i++)
{
  cin>>crr[i];
  if(crr==arr)

    {
        n++;
    }

    else
    {
        brr=crr;
        x++;
        }
}
 if(n>x)
 {
     cout<<arr<<endl;
 }
 else
 {
     cout<<brr<<endl;
 }

    return 0;

}
