/*
#include <stdio.h>

int binarySearch(int arr[], int beg, int end, int x) {
    if (arr == NULL) {
        return -1; 
    }
    if (beg == end) {
        if (arr[beg] == x) {
            return beg; 
        }
        else {
            return -1; 
        }
    }
    while (beg <= end) {
        int mid = beg + (end - beg) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        else if (arr[mid] < x) {
            beg = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1; 
}

int main(void) {
    int arr[] = {1,2,5,6,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int y = 5;
    int result = binarySearch(arr, 0, n - 1, y);
    if (result == -1) {
        printf("Element is not present in array");
    }
    else {
        printf("Element is present at index %d", result);
    }
 return 0;
}
*/
// Code For Batch-2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binarySearchString(char arr[][100], int size,char *target) {
    int l = 0;
    int r = size - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;
        int cmp_result = strcmp(arr[mid], target);
	if (cmp_result == '#')
		continue;
        else if (cmp_result == 0) {
            return mid; 
        } else if (cmp_result < 0) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return -1;
}

int main() {
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    getchar();

    if (num <= 0) {
        printf("Invalid number of elements\n");
        return 1; 
    }

    int MAX_STRING_LENGTH = 100;
    char replaceChar = '#'; 

    char Array[num][MAX_STRING_LENGTH];

   int n = 0;
   char* a;
   int b;
   for(int i = 0; i < num; i++) {
   	printf("Enter element %d: ", i + 1);
    	fgets(Array[i], MAX_STRING_LENGTH, stdin);

    
    	int Spaces = 1;
    	for(int j = 0; Array[i][j] != '\0'; j++) {
        	if(Array[i][j] != ' ' && Array[i][j] != '\n') {
            	Spaces = 0;
            	break;
        	}
    	}
    if(Spaces == 0){
	a=Array[i];
	b=i;
    }
    if(Spaces) {
        n++;
     }
}

if (n == num) {
    printf("Array is empty\n");
    exit(0); 
}

    char target[MAX_STRING_LENGTH];
    printf("Enter the element to find: ");
    fgets(target, MAX_STRING_LENGTH, stdin);
   
   if (n == num-1) {
    if(strcmp(target, a) == 0)
    	printf("Element found at index: %d\n",b);
    else
    	printf("Element not present\n");
    exit(0);
} 
   

     

    int result = binarySearchString(Array, num, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not present\n");
    }

    return 0;
}