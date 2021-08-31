#include<iostream>
using namespace  std;
int main()
{
 int t ;
 cin>>t;
 while(t--)

  {
int a,up=0,down=0,n,i;
  cin>> n;
  int x[50];

  for(i=0;i<n;i++)
  {
      cin>>x[i];

   if(x[i]==1)
     {
         up++;
     }


     else if(x[i]==2)

      {
          down++;
      }
     else if(x[i]==3)
        {

            up++;
        }
  }
    cout<<up<<endl;
  }

    return 0;

}
