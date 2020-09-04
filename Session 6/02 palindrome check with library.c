/** Read a string and check it is palindrome or not, using
a. library function **/
#include<stdio.h>
#include<string.h>
void main(){
	char string[100],reverse[100];
	printf("\nEnter a string: ");
	gets(string);
	strcpy(reverse,strrev(string));
	strrev(string);
	if (strcmp(string,reverse)==0){
		printf("\nPalindrome");
	}
	else{
		printf("\nNot Palindrome");
	}
	return 0;
}
