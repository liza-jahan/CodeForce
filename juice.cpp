#include<iostream>
#include <bits/stdc++.h>
#define MAX 100100
using namespace std;
int main()
{
        	int x[MAX];

		int a ,b,c,d;


		cin>>a>>b>>d;

		for(int i=0;i<a;i++)
		{

		cin>>x[i];
		}
		int e=0,sum=0;
		for(int i=0;i<a;i++)
           { if(x[i]>b){
				continue;
               }
            sum+=x[i];

            if(sum>d)
			{
			    sum=0;
			e++;
			}


               }


		cout<<e;
	return 0;

}
