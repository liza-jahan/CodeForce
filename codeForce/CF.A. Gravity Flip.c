
#include<stdio.h>
int main()
{
  int a,b,x[101] ,temp ;
  scanf("%d",&a);

    for(int i=0;i<a;i++)
    {
        scanf("%d",x[i]);
        for(int j =1;j<a;j++)
        {
          if(x[i]>x[j])
            temp= x[i] ;
          x[i]=x[j];
          x[j] = temp;
        }
        }
    for(int i=0;i<a;i++){

printf("%d",x[i]);}

}
