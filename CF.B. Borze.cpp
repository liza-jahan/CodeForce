#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int b,c,d,len,i;
 char a[201] ;
 cin>>a;
 len = strlen(a) ;
   for(i=0;i<len ;i++)
   {
   if(a[i]=='.')
   {
       cout<<"0";
       continue;
   }
  else if(a[i]=='-' && a[i+1]=='.')


    {
        cout<<"1";
        i++;
        continue ;
    }

  else if(a[i]=='-'&&a[i+1]=='-')
  {
      cout<<"2";
      i++;
      continue;
  }

   }
    cout<<endl;
    return 0;


}
