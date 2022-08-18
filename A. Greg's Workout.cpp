
#include<iostream>
using namespace std;
int main()
{
 int t,a,b,c,d=0,e=0,f=0,i;
 cin>>t;
for( i=1;i<=t;i++){
        cin>>a ;

     if(i%3==1)//c

      {

          d=a+d;
      }
      //b
     else if(i%3==2)
       {
           e=a+e;
       }
    else if(i%3==0)
    {
        f=f+a;
    }

        }

    if(d>e && d>f)
    {
        cout<<"chest";
    }

   else if(e>d && e>f)
    {
        cout<<"biceps";
    }
      else //(f>d && f>e)
    {
        cout<<"back";
    }



   return 0;
}
