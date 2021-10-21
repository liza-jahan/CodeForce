#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t,i,j;
  cin>>t;
  while(t--)
  {
    int n;
  cin>>n;
  vector<int>a(n);

  for(auto &p:a)
    {
        cin>>p;
    }
      set<int>r;
   for(i=0;i<n;i++)

    for(j=i+1;j<n;j++)

       r.insert( a[j] - a[i]);




  cout<<(int)r.size()<<endl;


}
return 0;
}
