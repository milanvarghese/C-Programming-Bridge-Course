// strev
#include<stdio.h>
int main(){
	//Input
	char str[1000];	
	printf("\nEnter a character: ");
	gets(str);
	
	//Length of string
	int i, len;
	len=0;
	while(str[len]!=0){
		len++;
	}
	
	//reverse
	char rev[1000];
	int end;
	end=len-1;
	for(i=0;i<len;i++){
		rev[i]=str[end];
		end--;
	}
	
	printf("\nReverse is: %s",rev);
	
	return 0;
}
