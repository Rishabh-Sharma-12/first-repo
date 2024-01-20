#include <stdio.h>
#include<time.h>
void create();
void print(int arr[],int n);


void merge(int arr[], int p, int q, int r) {
  //getting left half element in n1
  int n1 = q - p + 1;
  //getting right half elements in n2
  int n2 = r - q;
  //creating two arrays 
  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
  //storing elements in left array those are below mid
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
  //storing elemnts in right array those are above mid
    M[j] = arr[q + 1 + j];

  int i, j, k;
  //counter variable for the left array
  i = 0;
  //counter variable for the right array
  j = 0;
  //counter variable for sorted array
  k = p;
  //checking if any of the one array is empty
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) 
    //compareing if the left element is small of right
    {
      arr[k] = L[i];
      i++;
    } 
    else 
    //if not then add right element to sorted array
    {
      arr[k] = M[j];
      j++;
    }
    k++;
  }
  //if elements are left in left array
  while (i < n1) {
    //directly add it to k 
    arr[k] = L[i];
    i++;
    k++;
  }

  //if elements are left in right array
  while (j < n2) {
    //aad it to k 
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    //initilizing a variable for the mid term 
    int m = l + (r - l) / 2;
    //left side partition of the array
    mergeSort(arr, l, m); 
    //right side partition of the array
    mergeSort(arr, m + 1, r);
    //after dividing the array the elements are now sorted and mergerd
    merge(arr, l, m, r);
  }
}

void print(int arr[],int n) 
{   
    //printing array with n elements 
    for (int i=0 ; i <= n-1; i++) 
    {
        printf("%d ", arr[i]);
    }
        printf("\n");
}

int main() {
  create();
  return 0;
}

void create() {
    // Variable for length and loop
    int i, n;
    printf("Enter the length of an array: ");
    scanf("%d", &n);
    // Initializing the array with the given length
    int arr[n];
    for (i = 0; i <= n-1; i++) {
        /*      
        printf("Enter the %d element of an array: ", i + 1);
        scanf("%d", &arr[i]);
        */
       arr[i]=rand()%100;
    }
    printf("unsorted array input with rand() function\n");
    print(arr,n);
    // Initializing variables for calculating time
    clock_t start, end;
    // Initializing variables for calculating CPU time
    double cpu_time_used;
    // Starting the time measurement
    start = clock();
    mergeSort(arr, 0, n - 1);
    //ending the clock
    printf("The sorted array after applying merge is-\n");
    //printing the sorted array 
    print(arr,n);
    end = clock();
    //printing the total time taken by cpu
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken is %0.3f seconds to execute.\n", cpu_time_used);
    printf("Jitna dimaag tha utna laga diya -BY RISHABH SHARMA");
}