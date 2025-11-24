#include<stdio.h>
int sumdegit(int n){
	int sum =0;
	while(n!=0){
		int rem  = n%10;
		sum+=rem;
		n =n/10;
	}
	return sum;
}
int findsum(int n){
	int sum = sumdegit(n);
	while(sum>=10){
		printf("%d\n" ,sum );
		sum = sumdegit(sum);
	}
	return sum;
}
int main(){
	int n ;
	scanf("%d" , &n);
	int sum = findsum(n);
	printf("%d" , sum);
	return 0;
}
