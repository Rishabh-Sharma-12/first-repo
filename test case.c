#include<stdio.h>
int main()
{
int i;
scanf("%d",&i);
int a[i];
if(sizeof(a[i])>=0)
    {
    while(a[i]!==NULL){
        printf("no element in array");
        i++;
        }
    }
else{
    printf("no element");
}   
}