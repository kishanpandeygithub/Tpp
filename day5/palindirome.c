#include<stdio.h>

int main(){
char s[45];
printf("Enter the string\n");
scanf("%s" , &s);

int st =0;
int end =0;
int i =0;
while(s[i]!='\0'){
	end++;
	i++;
}
end--;
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

