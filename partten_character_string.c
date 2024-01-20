#include<stdio.h>
#include<stdlib.h>
int main(){
char string_1[10],string_2[10];
int i,j,flag=0;
scanf("%s",&string_1);
scanf("\n%s",&string_2);
for(i=0;i<5;i++){
    for (j=0;j<5;j++){
        if(string_1[i]==string_2[j]){
            flag++;
        }
    }
}
printf("There were %d similar elements in the strings",flag);
}