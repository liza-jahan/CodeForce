#include<iostream>
#include<string>
using namespace std;
int main()

  {
      string a,b;
      cin>>a>>b;
      for(size_t i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])

        {
            b[i]='1';
        }
     else{
        b[i]='0';
     }
    }

    cout<<b;


}
