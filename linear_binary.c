#include <stdio.h>
#include <time.h>            
//function to create an array
void create();               
//function to perform linear search
void linear_search(int arr[], int n);  
//function to perform binary search
void binary_search(int arr[],int n);
//initialising main function      
int main() 
{
    //creating array
    create();
    return 0;
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
    printf("1.)Linear search\n");
    printf("2.)Binary search\n");
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
    //calling linear search function
    linear_search(arr, n);
    //ending the process time taken
    end = clock();
    //computing total time taken
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %lf seconds to perform linear search\n", cpu_time_used);
    printf("Jitna dimaag tha utna laga diya -BY RISHABH SHARMA");
    break;         
    
    case 2:    
    //initilising start function
    start = clock();
    //calling selection sort function
    binary_search(arr, n);
    //ending the process time taken
    end = clock();
    //computing total time taken
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %lf seconds to perform Binary search\n", cpu_time_used);
    printf("Jitna dimaag tha utna laga diya -BY RISHABH SHARMA");
    break;         

    }


}

//taking input after creation of an array
void linear_search(int arr[], int n)
{    
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


void binary_search(int arr[],int n)
{
   // Initializing counters, loop, and item variables
   int flag=0,item,mid,beg,end;
    //initializing end variable 
    end=n-1;
    //initializing start variable 
    beg=0;
    printf("Enter the number to be searched in an array : \n");
    //getting value of item 
    scanf("%d",&item);
    //initilizing loop with condition
    while(beg<=end)
    {
    flag++;
    //initilizing mid variable 
    mid=(beg+end)/2;
    //comparing item with mid
    if(item==arr[mid])
    {
        printf("Element Found at %d\n",mid);
        break;
    }
    //condition if item is greater than mid of an array
    else if(item>arr[mid])
    {
        beg=mid+1;   
    }
    //condition if item is smaller than mid of an array
    else
    {
        end=mid-1;
    }
}
//printing flag used to searched
    printf("Flag: %d\n", flag);

}