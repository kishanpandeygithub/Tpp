#include<stdio.h>
double fib(int n){
	double a =0;
	double b = 1;
	int i;
	for( i =0;i<=n;i++){
		if(i==0){
		   printf("%.2lf  " , 0.00);
		   continue;
	   }
	   if(i==1){
		   printf("%.2lf  " , 1.00);
		   continue;
	   }
		double c =a+b;
		a =b;
		b =c; 
		printf("%.2lf  " , c);
	}
}
double fibo(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	return fibo(n-1)+fibo(n-2);
}

int main(){
double d;
scanf("%lf" , &d);
fib(d);
printf("\n");
int i;
for(i = 0;i<=d;i++){
	printf("%.2lf  " ,fibo(i));
}
return 0;
}

