#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int a ,b,x[100];

 cin>>a;
 for(int i=0;i<a;i++)

{
   cin>>x[i];

}
 sort(x,x+a);
 for(int i=0;i<a;i++)
{

    cout<<x[i]<<"\t";
}

return 0;

}
