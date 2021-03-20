#include<iostream>
#include<string>
using namespace std;
 int main()
 {
 int a,x,i;
 long long sum=0,c;
  int b[100];
  cin >> a>>x;
    for(i=0;i<a;i++)
     {
       cin>>b[i];
     }
    for(i=0;i<a;i++)
{
     if(b[i]>x)
      sum = sum+2;
       else
  sum ++;

        }

     cout<<sum<<"\n";
return 0;

 }
