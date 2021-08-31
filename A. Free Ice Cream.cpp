#include<iostream>
using namespace std;
int main()
{
   int a,n=0,b,c,x;
    cin>>a>>b;
    char  w;
    for(int i= 0;i<a;i++)
  {

   cin>>w>>c;
    if(w == '+')
    {
        b +=c;
    }
    else if(c<=b)
    {
        b -=c;
    }
    else
    {
        n++;
    }

  }
  cout<< b <<" "<<n;


   return 0;


}
