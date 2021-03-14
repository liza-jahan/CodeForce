#include<iostream>
#include<string>
 int main()
 {
 int a,x,i,sum=0,c;
  int b[100];
  cin >> a>>x;
    for(i=0;i<a;i++)
     {
       cin>>b[i];
       c = (b[i]/x)+1;
       sum = sum+c;

     }
     cout<<sum<<"\n";
return 0;

 }
