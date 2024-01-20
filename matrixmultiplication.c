#include<stdio.h>
int main(){
int row,col;
int a[2][2],b[2][2],c[2][2];
printf("Matrix multiplication\n");
printf("Enter the number of rows and column : \n");
scanf("%d%d",&row,&col);
printf("-------------Elemnts of matrix A\n");
for(int i=0;i<row;i++){
    for (int j=0;j<col;j++){
        printf("Enter elment %d X %d of matrix A :",i,j);
        scanf("%d",&a[i][j]);
    }
}
printf("Enter the number of rows and column matrix B: \n");
scanf("%d%d",&row,&col);
printf("-------------Elemnts of matrix B\n");
for(int i=0;i<row;i++){
    for (int j=0;j<col;j++){
        printf("Enter elment %d X %d of matrix B :",i,j);
        scanf("%d",&b[i][j]);
    }
}

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        c[0][0]=0;
        for(int k=0;k<2;k++){
            c[i][j]+=a[i][k]*b[k][j];

        }
    }
}

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf(" %d ",c[i][j]);
    }
    printf("\n");
}



    
}