#include<stdio.h>
#include<string.h>
int main(){
	int n;
	printf("Enter the size of the string\n");
	scanf("%d" , &n);
	char s[20] ;
	printf("Enetr the string\n");
	scanf("%s" , &s);
	
	
	char rev[20] ="";
	int last =strlen(s);
	int i =0;
	for(i =0;i<strlen(s);i++){
		rev[i]=s[last-i-1];
	}
	printf("%s" ,rev);
	return 0;
}
