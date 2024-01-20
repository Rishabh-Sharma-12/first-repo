#include <stdio.h>
int main(){
int n;
        printf("Enter the length\n");//length of the array 
        scanf("%d",&n);
int obj[n],weight[n],profit[n];
float ppw[n];
    //geting values of the weight of the objects and there profits with there serieal numbers
    for(int i=0;i<n;i++)
    {
        printf("Enter the weight(in kg) of object %d : ",i+1);
        scanf("%d",&weight[i]);
        printf("Enter the profit of object %d : ",i+1);
        scanf("%d",&profit[i]);
        obj[i]=i;
        printf("\n------NEXT OBJ-------\n");
    }
    /*for(int i=0;i<n;i++)
    {
        printf("%d %d\n",weight[i],profit[i]);
    }
    */
   //getting values of the profit per weight of the objects
    for(int i=0;i<n;i++)
    {
    ppw[i]=profit[i]/weight[i];
    }
    /*
     for(int i=0;i<n;i++)
    {
        printf("%f ",ppw[i]);
    }*/
        printf("ppw Element succesfully entered\n");
    //sorting the array with the help of selection sort
    for(int i=0;i<n;i++)
    {
        printf(" OBJ %d PPW value is :%0.2f\n",i,ppw[i]);
    }
    int min_ind;
    for (int i = 0; i <n-1; i++) {
        min_ind = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (ppw[j] < ppw[min_ind]) 
            {
                min_ind = j;
            }
        }
        if (min_ind != i) 
        {
            float temp = ppw[i];
            ppw[i]=ppw[min_ind];
            ppw[min_ind]= temp;
        
            int k=obj[i];
            obj[i]=obj[min_ind];
            obj[min_ind]=k;        
        }


    }   
        printf("ppw Element succesfully sorted as\n");
    //printing the array after sorting
    for(int i=n-1;i>=0;i--)
    {
        printf(" OBJ %d PPW value is :%0.2f\n",obj[i],ppw[i]);

    }     
    int k_qua;
    printf("\nEnter the total weight to be stored-:\n");
    scanf("%d",&k_qua);
    int knapsack[n];
    while (k_qua!=0)
    {
        k_qua-weight[];
    }





}