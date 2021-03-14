#include<iostream>

using namespace std;
int main()
{
  int i ,j,k,sum=0;
  int a,b ;
  cin>>k;
  for(i=0;i<k;i++)
    {
      cin >>a >>b;
        if(b>a)
        {
          sum = sum +1;
        }

    }

    cout<<sum<<"\n";
return 0;

}
