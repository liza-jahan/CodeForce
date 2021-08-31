
#include<iostream>
using namespace std;
int main()
{
  int i,a=0,b,c;
  string x;

  cin>>x;
  int len=x.length();
  for(i=0;i<len-2;i++)
  {
     for(int j=i+1;j<len-1;j++)
     {
     for(int k =j+1;k<len;k++)
       {
       if(x[i]=='Q' && x[j]=='A'&& x[k]=='Q')

        {
        a++;
    }

       }



     }

  }

  cout<<a<<endl;





}
