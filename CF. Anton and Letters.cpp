#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{ int i,len,n=0;
char a[1000];
 cin>>a;
  len = strlen(a);
 sort(a,a+len);
 for(i=0;i<len;i++)
    {
      if(a[i]>=97 && a[i]<123)
        {
          n++;
           if(a[i]== a[i+1])
        {
           n--;

            }
    }}
    cout<<n;

    return 0;
}
