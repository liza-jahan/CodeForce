#include<iostream>
#include<string>
using namespace std;
int main()
{
 string a;
 int i,j;
 cin>>a;
 for(i=0;i<a.size();i++)

  { if(a[i]==a[0]||a[i]==a[5])
      {
        a[i] = toupper(a[i]);
      }

     else if(a[i]>0)
     {

       a[i]=tolower(a[i]);
     }


cout<<a[i];
  }
 return 0;

}
