#include<iostream>
#include<string>
using namespace std;
int main()
{
   int a,i,x=0,y=0;
    cin>>a;
    string s;

        cin>>s;

     for(i=0;i<a;i++)
     {
    if(s[i]=='A')
    {
        x++;
    }
    else if(s[i]=='D')
    {
        y++;
    }}
    if(x>y)
   {cout<<"Anton"<<"\n";}
   else if(x<y)
   {
       cout<<"Drink"<<"\n";
   }
   else
   {
       cout<<"Friendship"<<"\n";
   }




}
