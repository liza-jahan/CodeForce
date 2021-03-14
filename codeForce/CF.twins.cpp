#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ int a;
 int b[a];
 int sum=0,i,n=0,v;
 cin>>a;
 for(i=0;i<a;i++)

    {
      cin>>b[i];
        sum +=b[i];
    }
    sum = sum/2;
    sort(b,b+n);
    int sum2 =0;
    for(int j=a-1;j>=0;j--)
{
   sum2 +=b[j];
    n++;
    if(sum2>sum){

        break;
}
}
  cout<<n<<"\n";
 return 0;
   }




