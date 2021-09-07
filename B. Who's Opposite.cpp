#include<iostream>
using namespace std;
int main()
{
   int a,b,c,t,v,ans,x,y,sub;
   cin>>t;
   while(t--)
   {
     cin>>a>>b>>c;
      x= abs(a-b);
      v = x*2;
      if(a>v || b>v || c>v)
       {
           cout<<" -1" <<endl;
       }
       else
       { y = c+x;
          if(y>v)
           {
              sub= c-x;
           }

          cout<<y<<endl;
       }


}





   return 0;






}
