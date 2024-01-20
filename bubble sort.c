#include<stdio.h>
int main(void){
    int i,j,temp,n,k;
    printf("Enter the length of the array :");
    scanf("%d",&n);
    int arr[n];
    printf("%d\n",n);
        for(i=0;i<n;i++)
        {
            printf("Enter the %d element of an array :",i);
            scanf("%d",&arr[i]);
        
        }
    printf("Input of the array is :\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    printf("\n");
        for(i=0;i<n-1;i++)
        {
            printf("phase:%d\n",i+1);
                for(j=0;j<n-1-i;j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                        temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }              
                    else
                    {
                        for(k=0;k<n;k++)
                        {
                        printf("%d ",arr[k]);
                        }
                        printf("\n");
                        continue;
                    }
                for(k=0;k<n;k++)
                {
                printf("%d ",arr[k]);
                }
                printf("\n");   
                }    
            printf("\n---------------------------------\n");
        }
    printf("final array after sorting is: \n");
    for(k=0;k<n;k++)
        {
            printf("%d ",arr[k]);
        }

}
