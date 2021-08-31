#include<iostream>
using namespace std;
int main()
{
 int a[1000],t;
 cin>>t;
 while(t--)
 { float b,c,d;
 int n,e=0;

     cin>>n;
 for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
   for(int i=0;i<n;i++)
   {
       int j=i+1;
     if(j<n)
      {
          b = max(a[i],a[j]);
      c= min (a[i],a[j]);
      d = b/c;
      while(d>2)
      {
        c = c*2;
        d = b/c;

         e++;
          }
   }}
   cout<<e<<endl;
 }
 return 0;
}
