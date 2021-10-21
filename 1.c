#include <stdio.h>

int main() {
   int arr[100],n;
     int i,  second ,small ,largest ;
   scanf("%d",n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){

   if(arr[i] > arr[i+1]) {
       largest = arr[i];
      second  = arr[i+1];
   } else {
       largest = arr[i+1];
      second  = arr[i];
   }
}
   for(i = 2; i < n; i++) {
      if( largest < arr[i] ) {
         second = largest;
         largest = arr[i];
      } else if( second < arr[i] ) {
         second =  arr[i];
      }
   }

   printf("Largest - %d \nSecond - %d \n", largest, second);


}
