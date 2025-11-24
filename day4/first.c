#include<stdio.h>


int main(){
//chech weaher the number are anagrams 
int n1;
printf("Enter the number");
scanf("%d" , &n1);
int n2;
printf("Enter the second number");
scanf("%d" , &n2);

int arr[10];
int i =0;
for( i =0;i<10;i++){
	arr[i]=0;
}
while(n1!=0){
	int n = n1%10;
	n1 = n1/10;
	arr[n]++;
}
while(n2!=0){
	int n = n2%10;
	n2 = n2/10;
	arr[n]--;
}

for( i =0;i<10;i++){
	if(arr[i]!=0){
		printf("The numbers are not the aragrama");
		return 0;
	}
}
printf("the numbers are aragrams");
return 0;
}

