#include<stdio.h>
#include<stdlib.h>
void sort(int arr[],int n){
    for(int i = 1 ; i<n;i++){
        int current = arr[i];
        int j = i - 1;
        while(arr[j] > current && j>= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;

    }
}
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
    sort(arr,n);
    printf("sorted array : \n");
    for(int i = 0; i<n;i++)
        printf("%d ", arr[i]);
    printf("\n");
   
    int l = 0, h = n -1;
    while(l<=h){
        int mid = (l+h)/2;
        if(key == arr[mid]){
            printf("Element found on index %d\n", mid);
            return 0;
        }
        else if(key< arr[mid]){
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
       
    }
     printf("Element not found\n");
     return 0;
}

    