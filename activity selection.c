#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the number of the activities:\n");
    scanf("%d",&n);
    float start[n],finish[n];
    int act[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the staring time of activity %d : ",i+1);
        scanf("%d",&start[i]);
        printf("Enter the finishing time of activity %d : ",i+1);
        scanf("%d",&finish[i]);
        act[i]=i;
        printf("\n------NEXT Activity-------\n");
    }

int min_ind;
    for (int i = 0; i <n-1; i++) {
        min_ind = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (finish[j] < finish[min_ind]) 
            {
                min_ind = j;
            }
            if (min_ind != i) 
            {
            float temp = finish[i];
            finish[i]=finish[min_ind];
            finish[min_ind]= temp;
        
            int k=act[i];
            act[i]=act[min_ind];
            act[min_ind]=k;        
            }


    }   
        printf("Activities are sorted succesfully with the finishing time\n");
    //printing the array after sorting
//printing the array after sorting
    for(int i=0;i<=n-1;i++)
    {
        printf(" Activity %d finishing time :%0.2f\n",act[i],finish[i]);

    }



}