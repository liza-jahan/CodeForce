#include<iostream>
using namespace std;
int main()
{
 int t;
 int web,web2,c,i;
 cin>>t;
  string s,a;

 while(t--)
 {
   web =0,web2=0,c=0;

  cin>>s;
  for(i=0;i<s.length();i++)
   {
     if(s[i]=='1')
       {

       web = i;
       break;
       }
       }

    for(i=s.length();i>=web;i--)
     {
      if(s[i]=='1')

     {
         web2=i;
      break;
     }
         }

     for(i=web;i<web2;i++)
     {
       if(s[i]=='0')
        {
          c++;
      }

     }

     cout<<c<<"\n";
 }

return 0;
}
