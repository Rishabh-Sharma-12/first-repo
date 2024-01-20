#include <stdio.h>
#include<time.h>
void swap(int *x, int *y);
void create();
void print(int arr[],int x,int j);
void quick_sort(int arr[], int first,int last);

int main() {
    create();
    return 0;
}

//taking input in a pointer
void swap(int *x, int *y)  
{
    //performing swap with 3 variable
    int temp = *x;   
    *x = *y;
    *y = temp;
}

void create() {
    // Variable for length and loop
    int i, n;
    printf("Enter the length of an array: ");
    scanf("%d", &n);
    // Initializing the array with the given length
    int arr[n];
    for (i = 0; i <=n-1; i++) {
        
        printf("Enter the %d element of an array: ", i + 1);
        scanf("%d", &arr[i]);
        
       //arr[i]=rand()%100+99;    
    }

    print(arr,0,n-1);
    // Initializing variables for calculating time
    clock_t start, end;
    // Initializing variables for calculating CPU time
    double cpu_time_used;
    // Starting the time measurement
    start = clock();
    int first=0;
    int last =n-1;
    quick_sort(arr,first,last);
    printf("The sorted array after applying quick sort is-\n");
    //printing the sorted array 
    print(arr,0,n-1);
    //ending the clock
    end = clock();
    //printing the total time taken by cpu
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken is %f seconds to execute.\n", cpu_time_used);
    printf("Jitna dimaag tha utna laga diya -BY RISHABH SHARMA");
}


void print(int arr[],int x,int j) 
{   
    //printing array with n elements 
    for (int i=x ; i <= j; i++) 
    {
        printf("%d ", arr[i]);
    }
        printf("\n");
}

void quick_sort(int arr[ ],int first ,int last) 
{   //creating intilising variable for sorting
    int i,j,pivot;
   //checking the condition of empty array
    if(first<last){
        //initalizing the variables like pivot left and right 
        pivot=first;
        i=first;
        j=last;
        //wiil initilize loop for the swapping 
        while(i<j){
            //checking conditon to run left variable
            while(arr[i]<=arr[pivot] && i<last)
            i++;
            //checking conditon to run right variable
            while(arr[j]>arr[pivot])
            j--;
            //checking if i and j stops and i<j then swap
            if(i<j)
            {
                //swap the i element with j
                swap(&arr[i],&arr[j]);
            }
        }
        
        //swap the pivot element with j
        swap(&arr[pivot],&arr[j]);
        //applying the quick sort on left side of divided array
        quick_sort(arr,first,j-1);
        //applying the quick sort on right side of divided array
        quick_sort(arr,j+1,last);
    }

}
