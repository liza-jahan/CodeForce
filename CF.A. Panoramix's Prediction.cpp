#include<iostream>
using namespace std;
int main()
{
 int n,m,a,b,c,d=0,i;
 int man[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
 cin>>n>>m;
 for(i=0;i<15;i++)
 {
     if(n==man[i] && m==man[i+1])

  {

    d ++;
    break;
    }
 }
if(d==0)
  {
      cout<<"NO"<<endl;

  }
  else
  {
      cout<<"YES"<<endl;
  }

return 0;
}
