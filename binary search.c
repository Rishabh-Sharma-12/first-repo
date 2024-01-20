#include<stdio.h>
#include<time.h>
int main(void)
{
    //intilizing clock
    clock_t start, endt;
    double cpu_time_used;
    start = clock();    
    int i,n;
    //taking input length of array
    printf("\nenter the length of an array");
    scanf("%d",&n);
    //initilizing array
    int arr[n];
    //taking input of array
    for(i=0;i<n;i++)
    {
        printf("Enter the value at %d :",i);
        scanf("%d",&arr[i]);
    }
   // Initializing counters, loop, and item variables
   int flag=0,item,mid,beg,end;
    //initializing end variable 
    end=n-1;
    //initializing start variable 
    beg=0;
    printf("Enter the number to be searched in an array : \n");
    //getting value of item 
    scanf("%d",&item);
    i=0;//for counting element
    //initilizing loop with condition
    while(beg<=end)
    {
    flag++;
    //initilizing mid variable 
    mid=(beg+end)/2;
    //comparing item with mid
    if(item==arr[mid])
    {
        i++;
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
//checking if element is present or not 
if(i!=1)
{
printf("Element not found in the array\n");
}
//printing flag used to searched
    printf("Flag: %d\n", flag);
    printf("Jitna dimaag tha utna laga diya -BY RISHABH SHARMA");

}