#include<iostream >
using namespace std;
int main()
{
 int t,i;
cin>>t;
while(t--)
 {  int n;
  cin>>n;
   int sum =0;
   int x[n];
  for(i=0;i<n;i++)
 {
     cin>>x[i];
     sum = sum +x[i];
 }
 if(sum%n!=0)
   {
       cout<<"-1"<<endl;
   }

  else if(sum%n==0)
  {
   int  b=0;
     int  a= sum/n;
     for(i=0;i<n;i++)
    {

    if(x[i]>a)
     {
         b++;
     }

    }
      cout<<b<<endl;
      }

 }
return 0;

}
