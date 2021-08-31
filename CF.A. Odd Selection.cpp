 #include<iostream>
using namespace std;
 int main()
 {
  int t,a,i,b,e[100];
  cin>>t;
  while(t--)
  {
      int odd=0,even=0;
   cin>>a>>b;
   for(i=0;i<a;i++)
     {
         cin>>e[i];

    if(e[i]%2==0)
     {
         even++;
     }
    else
    {
        odd++;
    }}
   int  c= min(even,b-1) ;
    int  d = b-c;
      if(d%2==0)
      {
          d++;
      }
      if(odd>=d && d<=b)
      {
          cout<<"YES"<<"\n";
      }
      else
      {
          cout<<"NO"<<"\n";
      }
  }

    return 0;

 }
