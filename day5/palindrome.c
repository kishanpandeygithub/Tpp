#include<stdio.h>
#include<string.h>

int main(){
char *s;
printf("Enter the string\n");
scanf("%s" , &s);

int st =0;
int end =(strlen(s))-1;
while(st<=end){
	if(s[st]!=s[end]){
		printf("The string is not palindrome");
		return 0;
	}
	st++;
	end--;
}
printf("the string is the palindrome");
return 0;
}

