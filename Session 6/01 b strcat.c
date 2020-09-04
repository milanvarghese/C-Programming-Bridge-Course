// strcat()
#include<stdio.h>
int length(char string[]){
	int i, len;
	len=0;
	while(string[len]!='\0'){
		len++;
	}
	return len;
}
int main(){
	//Input two strings
	char string1[1000],string2[1000];
	printf("\nEnter two string 1: ");
	gets(string1);
	printf("\nEnter two string 2: ");
	gets(string2);
	
	//string length
	int len1,len2;
	len1=length(string1);
	len2=length(string2);
	
	//String Concatination
	int end,i;
	end=len1-1;
	for(i=0;i<(len1+len2-2);i++){
		string1[i+end]=string2[i];
	}
	printf(string1);
	return 0;
}
