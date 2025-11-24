#include<stdio.h>
int main(){
	int n ;
	scanf("%d" ,&n);
	int arr[n] ;
	printf("Enter the Element of the array\n");
	int i =0;
	for( i =0;i<n;i++){
		scanf("%d" , &arr[i]);
	}
	
	int max =arr[0];
	int secmax;
	for( i =0;i<n;i++){
		if(arr[i]>max){
			secmax = max;
			max =arr[i];
		}
		else if(arr[i]<max && arr[i]>secmax){
			secmax = arr[i];
		}
	}
	printf("maximum = %d ,secmaximum =  %d" ,max , secmax);
}
