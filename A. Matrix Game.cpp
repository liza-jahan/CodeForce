#include<iostream>
#include<set>
using namespace std;
int main()
{
 int t,n,m,i,j;
 cin>>t;
 while(t--)

 {
  cin>>n>>m;
  int a[n][m];
  set<int>r,c;
  for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
    {
        cin>>a[i][j];
        if(a[i][j]==1)
        r.insert(i),c.insert(j);
        }
      }

    int ans =min (n-r.size(),m-c.size());

     if(ans%2==0)
     {
         cout<<"Vivex"<<endl;
     }
    else{
        cout<<"Ashish"<<endl;
    }



 }


}
