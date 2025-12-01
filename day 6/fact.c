#include<stdio.h>

double factorial(int n){
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int n ;
    scanf("%d", &n);

    if(n < 0){
        printf("The factorial of a negative number cannot be calculated");
        return 0;
    }

    if(n == 0){
        printf("%d", 1);
        return 0;
    }

    double fact = 1;
    int i;
    for( i = 1; i <= n; i++){
        fact *= i;
    }

    printf("%lf\n", fact);       
    printf("%lf", factorial(n));  

    return 0;
}

