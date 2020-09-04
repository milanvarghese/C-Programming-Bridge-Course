/** Read a string and check it is palindrome or not, without using
a. library function **/
#include<stdio.h>
int length(char string[]){
	int i, len;
	len=0;
	while(string[len]!='\0'){
		len++;
	}
	return len;
}
void main(){
	char string[100];
	printf("\nEnter a string: ");
	gets(string);
	int i,len,ans;
	len=length(string);
	for(i=0;i<(len/2);i++){
		if(string[i]!=string[len-i-1]){
			ans=1;
			break;
		}else{
			ans=0;
		}
	}
	if(ans==0){
		printf("\nPalindrome");
	}
	else{
		printf("\nNot Palindrome");
	}
	
	return 0;
}
