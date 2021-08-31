#include<iostream>
using namespace std;
int main()
{
 int a,b,n,m,c;
 cin>>n>>m;
  a = max(n,m);
   c = 6-a+1;

  if(a==1)
    {
     cout<<"1/1"<<"\n";
    }
  else if(a==2)
    {
       cout<<"5/6"<<"\n";
    }
   else if(a==3)
    {
        cout<<"2/3"<<"\n";
    }
    else if(a==4)
    {
        cout<<"1/2"<<"\n";
    }
     else if(a==5)
       {
           cout<<"1/3"<<"\n";
       }
    else if(a==6)
        {
            cout<<"1/6"<<"\n";
        }

     return 0;
}
