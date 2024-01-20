#include<stdio.h>
int main(void){
    int i,j,x,y,k=0;
    printf("Enter the row and column :\n");
    scanf("%d\n%d",&x,&y);
    int a[x][y],b[x][y],c[x][y];
while(k<2){
    for(i=0;i<x;i++){
        for(j=0;j<y;j++)
        {
            if(k==0)
            {
                printf("Enter the value of A (%d x %d) element of the matrix A :",i,j); 
                scanf("%d",&a[i][j]);
            }
            else
            {
                printf("Enter the value of B (%d x %d) element of the matrix B :",i,j);
                scanf("%d",&b[i][j]);
            }
        }
    }
    k++;
    }
    printf("\n---SUM OF MATRIX A AND B---\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
    printf("\n");
    }
printf("--------------------------\n");    
}