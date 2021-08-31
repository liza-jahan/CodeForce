
#include<iostream>
using namespace std;
int main()
{
 long long int a,b,c=0,n=0,i;
 char s[200001];
 cin>>a;

 cin>>s;
  //gets(s) ;
  //gets(s);
for(i=0;i<a;i++)
{
 if(s[i]=='1')
  {
      c++;
  }
 else
 {
     n++;
 }


}
if(n>c)
{
    cout<<n-c<<endl;
}
else if(n==c)
{
    cout<<"0";
}
else if(c>n)
{
    cout<<c-n<<endl;
}
return 0;
}
