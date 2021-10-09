#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr ;
    int n,key;
    printf("Enter the length of an array\n");
    scanf("%d", &n);
    arr = (int*)malloc(n*sizeof(int));
    printf("Enter the elements\n");
    for(int i = 0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Which element you want to find\n");
    scanf("%d", &key);
    for(int i = 0;i<n;i++){
        if(arr[i] == key ){
            printf("Element is found on index %d", i);
            return 0;
        }
    }
    printf("Element is not found ");
    free(arr);
    
    
    return 0;
}