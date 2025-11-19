#include<stdio.h>

int main(){
    int arr[] ={1 ,2,3 ,4,5 ,6};
    int n ;
    scanf("%d" , &n);
    int size =sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            printf("%d" , i);
            return 0;
        }
    }
    printf("The number is not found in the array");
}