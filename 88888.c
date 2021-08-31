
//merge sort......
#include <stdio.h>

// Divide the array into two sub arrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {

    int m = l + (r - l) / 2;  // m is the mid point of the array .

    mergeSort(arr, l, m);   // first half
    mergeSort(arr, m + 1, r); // second half
    merge(arr, l, m, r);    // Merge the sorted subarrays
  }
}
// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r) {


  int n1 = q - p + 1;
  int n2 = r - q;

     //creating temporary array for comparison
  int L[n1], M[n2];
       //coping elements to the left array
  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
    //coping elements to the right array
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  int i, j, k;
  i = 0;   // index for left array
  j = 0;  // index for right array
  k = p;  // index for final array

    //comparing  and merging
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  //coping the remaining elements from left array
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

       //coping the remaining elements from right array
  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}



// Print the array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

// Driver program
int main() {
  int arr[]={7,5,4,3,1,9};

  int size = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, size - 1);

  printf("Sorted array: \n");
  printArray(arr, size);
}
