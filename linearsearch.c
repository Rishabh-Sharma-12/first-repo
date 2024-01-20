#include <stdio.h>
#include <time.h>

void linearsearch(int arr[], int n);

int main() {
    //calling create function
    create();
}

void create() {
    // Variable for length and loop
    int i, n;
    printf("Enter the length of an array: ");
    scanf("%d", &n);
    // Initializing the array with the given length
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter the %d element of an array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Initializing variables for calculating time
    clock_t start, end;
    // Initializing variables for calculating CPU time
    double cpu_time_used;
    // Starting the time measurement
    start = clock();
    // Calling the linearsearch function
     linearsearch(arr, n);
    end = clock();
    //ending the clock
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    //printing the total time taken by cpu
    printf("Time taken is %0.3f seconds to execute.\n", cpu_time_used);
    printf("Jitna dimaag tha utna laga diya -BY RISHABH SHARMA");
}

void linearsearch(int arr[], int n) {
    // Initializing counters, loop, and item variables
    int flag = 0, k = 0, i, item;
    //taking input of the element 
    printf("\nEnter the element to be searched: ");
    scanf("%d", &item);
    for (i = 0; i < n; i++) {
        flag++;
        //comparing each element with the item need to be found
        if (arr[i] == item) 
        {
            
            //adding variable to check whether element was present in the index or not
            k++;
            //check for element in an array
            if(k==1)
            {
            printf("Element found at %d index.\n", i);
            }
            //check duplicate element in an array
            if(k!=0 && k!=1)
            {
            printf("Element also found at %d index.\n",i);
            }
             
            continue;
        }
    }
    //if element was not it the array then return with this exception
    if (k == 0)
    {
        printf("Element not found.\n");
    }
    //printing flag used to searched
    printf("Flag: %d\n", flag);

}
