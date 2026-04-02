#include<stdio.h>
#define MAX 20

int top =-1;
void push(int arr[] , int n ){
	if(top<MAX){
		top++;
		arr[top] = n; 
	}
	else{
		printf("The stack is the full");
	}
}

void pop(int arr[] ){
   if(top!=-1){
		top--; 
	}
	else{
		printf("The stack is the Empty");
	}
}
int peek (int arr[]){
	if(top<MAX && top>-1)
     	return arr[top];
}
int main(){
int arr[MAX];
push(arr , 20 );
push(arr , 10 );
push(arr , 33 );
push(arr , 90 );
pop(arr);
int i =0;
for( i=top;i>=0;i--){
	printf("%d  " , arr[i]);
}
printf("\n");
printf("%d" ,peek(arr));

return 0;
}

