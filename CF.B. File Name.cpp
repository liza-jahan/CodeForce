#include<iostream>
using namespace std;
int main()
{
 int a,b=0,n=3,i;
 string s;
   cin>>a>>s;
    for(i=0;i<a;i++)
    {
     if(s[i]=='x' &&s[i+1]=='x'&&s[i+2]=='x')
        {
          n++;
           if(n>2)

                b++;
        }

    }
   cout<<b<<endl;

}
