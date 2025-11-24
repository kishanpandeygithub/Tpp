#include<stdio.h>
#include<string.h>

int main(){
 char s[200];
 scanf("%[^\n]" ,s);
 int i=0;
 int count =0;
 for(i =0;i<strlen(s);i++){
 	
 	char c = s[i];
 	if(c>='A'&&c<='Z'){
 		c+=32;
	 }
 	switch(c){
 		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
 			count++;
	 }
 }
 printf("the number of the vowel arw %d" , count);

return 0;
}

