
#include<iostream>
using namespace std;
int main()
{
  string a[] ={"Sheldon", "Leonard", "Penny", "Rajesh" ,"Howard" };
  int t,n;

   cin>>n;
   n--;
   while(n>=5)

   {
       n = n-5;
       n=n/2;
   }


cout<<a[n]<<endl;


    return 0;
}
