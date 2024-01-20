#include <stdio.h>
#include<time.h>
void create();
void print(int arr[],int n);

void print(int arr[],int n) 
{   
    //printing array with n elements 
    for (int i=0 ; i <n; i++) 
    {
        printf("%d ", arr[i]);
    }
        printf("\n");
}

void insertionSort(int array[], int n) {
  //initilizing loop variable
  for (int i= 1; i < n; i++) {
    //initializing temp variable with i+1 value 
    int temp = array[i];
    //initializing j with 0 
    int j = i - 1;
    //condition check if temp value is greater smaller than last j value
    while (j>=0 && array[j]>temp) {
      array[j + 1] = array[j];
      //if the temp is more smaller it will be compared with next least value of j 
      j--;
    }
    //if temp value is greater than value at j it will directly be added to sorted subarray 
    array[j + 1] = temp;
  }
}
int main() {
  create();
}
void create() {
    // Variable for length and loop
    int i, n;
    printf("Enter the length of an array: ");
    scanf("%d", &n);
    // Initializing the array with the given length
    int arr[n];
    for (i = 0; i <= n-1; i++) {
        //printf("Enter the %d element of an array: ", i + 1);
        //scanf("%d", &arr[i]);
        arr[i]=rand()%100;
    }
    // Initializing variables for calculating time
    clock_t start, end;
    // Initializing variables for calculating CPU time
    double cpu_time_used;
    // Starting the time measurement
    start = clock();
    print(arr,n);
    insertionSort(arr,n);
    //ending the clock
    printf("The sorted array after applying insertion sort is-\n");
    //printing the sorted array 
    print(arr,n);
    end = clock();
    //printing the total time taken by cpu
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken is %0.3f seconds to execute.\n", cpu_time_used);
    printf("Jitna dimaag tha utna laga diya -BY RISHABH SHARMA");
}