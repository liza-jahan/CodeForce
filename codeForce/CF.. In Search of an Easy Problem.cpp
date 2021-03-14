#include<iostream>
 using namespace std;
 int main()
 {
    int  a[101] ,b[100],sum =0, i ,k,j=0;
     cin>>k;
     {
     for(i=0;i<k;i++)

     {
        cin>>a[i] ;
        if(a[i]==1)

         {
             sum++;
         }
         else if(a[i]==0)
         {
             j++;
         }
         }

              if(sum>=1)
        {
            cout<<"HERD"<<"\n";
        }
        else
        {
            cout<<"EASY"<<"\n";
        sum =0,j=0;
        }}
     return 0;
 }

