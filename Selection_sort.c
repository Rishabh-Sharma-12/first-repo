#include <stdio.h>
#include <time.h>
//function to swap
void swap(int *x, int *y);              
//function to create an array
void create();               
//function to print an array
void print(int arr[], int n);           
//function to perform selection sort
void selection_sort(int arr[], int n);  
//function to perform bubble sort
void bubble_sort(int arr[],int n);
//initialising main function      
int main() 
{
    //creating array
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

void create() 
{
    //variable for length and loop
    int i, n;      
    printf("Enter the length of an array: ");
    scanf("%d", &n);
    //initialisig array with length
    int arr[n];   
    for (i = 0; i < n; i++) 
    {
        printf("Enter the %d element of an array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter what to perform\n");
    printf("1.)Selection sort\n");
    printf("2.)Bubble sort\n");
    scanf("%d",&i);
    //taking variable for calculating time  
    clock_t start, end;
    //this will store the total time taken
    double cpu_time_used;
    //creating switch for selection and bubble
    switch(i)               
    {       
    case 1:
    //initilising start function
    start = clock();
    //calling selection sort function
    selection_sort(arr, n);
    //calling print function after sort
    print(arr, n);
    //ending the process time taken
    end = clock();
    //computing total time taken
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %lf seconds to perform Selection sort\n", cpu_time_used);
    printf("Jitna dimaag tha utna laga diya -BY RISHABH SHARMA");
    break;         

    case 2:    
    //initilising start function
    start = clock();
    //calling selection sort function
    bubble_sort(arr, n);
    //calling print function after sort
    print(arr, n);
    //ending the process time taken
    end = clock();
    //computing total time taken
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %lf seconds to perform Bubble sort\n", cpu_time_used);
    printf("Jitna dimaag tha utna laga diya -BY RISHABH SHARMA");
    break;         

    }


}
//printing an array with input and length

void print(int arr[],int n) 
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
        printf("\n");
}
//taking input after creation of an array
void selection_sort(int arr[], int n)
{    
//creating variables for minimum index and a counter for steps taken 
int min_ind ,flag=0;
    for (int i = 0; i < n - 1; i++)
    {
        //assuming first element is smallest(storing its address)
        min_ind = i;
        flag++;
        for (int j = i + 1; j < n; j++)
        {
            //compairing other elements of array form smallest
            if (arr[j] < arr[min_ind])
            {
                //if element is smaller then storing new address for minimum
                min_ind = j;
            }
        }

        //checking if the priviously taken smallest 
        if (min_ind != i) 
        {
            //swaping the element with privious smallest
            swap(&arr[min_ind], &arr[i]);
        }
        //printing counter
        printf("\npass-%d\n",flag);
        //printing array after each pass 
        print(arr,n);
    }
}

void bubble_sort(int arr[],int n)
{
    //creating a variable counter
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        flag++;
        printf("\n phase: %d\n",flag);
        for(int j=0;j<n-1-i;j++)
        {
            //comparing first element with next
            if(arr[j]>arr[j+1])
            {
                //swap if first is smaller 
                swap(&arr[j],&arr[j+1]);
            }
            else
            {
                //if not print the array as it is 
                print(arr,n);
                continue;
            }
        }
        //print the array
        print(arr,n);
    }

}