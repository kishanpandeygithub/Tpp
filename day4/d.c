#include<stdio.h>
#include<string.h>

int main(){
//chech weaher the number are anagrams 
char n1[20];
printf("Enter the word1\n");
scanf("%s" , &n1);
char n2[20];
printf("Enter the word2\n");
scanf("%s" , &n2);

int arr[26];
int i =0;
for( i =0;i<26;i++){
	arr[i]=0;
}
i =0;
while(n1[i]!='\0'){
	arr[n1[i]-'a']++;
	i++;
}
i =0;
while(n2[i]!='\0'){
	arr[n2[i]-'a']--;
	i++;
}
i =0;
for( i =0;i<26;i++){
	if(arr[i]!=0){
		printf("The words are not the aragrama");
		return 0;
	}
}
printf("the word are aragrams");
return 0;
}

