#include<iostream>
using namespace std;
int main()
{
    long long int a,i,b[50001],c,d,sum=0,add=0,t,x,y;

    cin>>t;
    while(t--)
    {
    cin>>a;
 for(i=1;i<=a;i++)
     {
         cin>>b[i];
     }
     sum = b[1] +b[2] ;

     c = 1,d=2;
    for(i=3;i<=a;i++)
   {
     if(b[i]>=sum)
       {

       y = i;
       add = 1;
       break;

           }
      else
      {
          add =0;
      }


           }
           if(add==1)
             {
                cout<<c<<" "<<d<<" "<<y<<endl;
             }
         else if(add==0)
         {
             cout<<"-1"<<endl;
         }


    }




    return 0;
}
