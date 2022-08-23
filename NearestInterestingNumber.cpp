#include<iostream>
using namespace std;

int sum(int b);


int main()
{
 int a,b,total=0,result,x,y;
 cin>>a;



  while(sum(a)%4!=0)
  {
   a++;
  }
  cout<<a;

}
int sum(int b)
{
  int c=0,d;

while(b!=0)
  {
    d=b%10;
    c=c+d;
    b=b/10;

  }
  return c;
}
