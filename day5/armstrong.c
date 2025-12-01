#include<stdio.h>
#include<math.h>
int main(){
int n;
printf("Enetr the number");
scanf("%d" , &n);
int dig =0;
int val =n;
while(val!=0){
	dig++;
	val/=10;
}
val =n;
int sum =0;
while(val!=0){
	int rem = val%10;
	sum+= pow(rem , dig);
	val/=10;
}

if(sum==n){
	printf("%d is the Armonstrng" ,n);
}
else{
	printf("%d is the not Armonstrng" ,n);
}
}

