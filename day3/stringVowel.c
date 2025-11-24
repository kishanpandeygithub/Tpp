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
 	if(c>=97 && c<=122 &&( c!='a'||c!='e'||c!='i'||c!='o'||c!='u')){
 		count++;
	 }
 }
 printf("the number of the vowel arw %d" , count);

return 0;
}

