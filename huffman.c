 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {  int num;
    printf("Enter the length of the password :\n");
    scanf("%d",&num);
    char *pass[num];
    int freq[num];
    for (int i=0;i<num;i++)
    {
        printf("Enter the character : ");
        scanf("%s",&pass[i]);
        printf("Enter the frequence of character : ");
        scanf("%d",&freq[i]);
        printf("\n-------------------------\n");
    }
    printf("Char freq\n");
    printf("---------\n");
    for (int i=0;i<num;i++)
    {
        printf("%s %d",pass[i],freq[i]);
    }
    printf("---------\n");
 
 
 }