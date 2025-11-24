#include<stdio.h>
#include<stdlib.h>
int main(){
    int  a,b;
    int freq1[10],freq2[10];
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    int i;
    for( i =0 ; i< 10;i++){
    	freq1[i] =0;
    	freq2[i] =0;
	 }
    while(a>0){
        freq1 [a % 10]++;//digit count
        a/=10;

    }
    while(b>0){
        freq2 [b %10]++;//digit count
        b/=10;
    }
	  int flag=1;
    for(i=0;i<10;i++){
        if(freq1[i]!=freq2[i]){
            flag=0;
        }
    }
    if(flag==0){
        printf("number is not anagram");
    }else{
        printf("number is anagram");
    }
    return 0;

}
