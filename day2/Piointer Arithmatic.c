#include<stdio.h>
#include<string.h>
int main(){
	char *p = "kishapandey";
   while(*p!='\0'){
		printf("%c", *p);
		p++;
	}
	return 0;
}
