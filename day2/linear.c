#include<stdio.h>

int main(){
    int size;
    printf("Enter the size of the array");
    scanf("%d" ,&size);
    int arr[size] ;
    printf("Enetr the element of the array ");
    int i;
    for( i  =0;i< size;i++){
        scanf("%d" , &arr[i]);
    }
    int n ;
    printf("Enter the target number");
    scanf("%d" , &n);
    for( i=0;i<size;i++){
        if(arr[i]==n){
            printf("%d" , i);
            return 0;
        }
    }
    printf("The number is not found in the array");
}
