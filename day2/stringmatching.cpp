#include<stdio.h>
#include<string.h>
int main(){
	char s[20] ;
	printf("Enetr the first string");
	scanf("%s" , &s);
	printf("Enetr the second string");
	char p[20];
	scanf("%s" , &p);
	if(strlen(s)!=strlen(p)){
		printf(s);
	}
	int i;
	for( i =0;i< strlen(s);i++){
		if(s[i]!=p[i]){
			printf("The string is not matched");
			return 0;
		}
	}
	printf("The string is matched");
	return 0;
}
