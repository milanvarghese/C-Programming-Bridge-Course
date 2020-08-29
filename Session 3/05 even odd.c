//check the given number is odd or even
#include<stdio.h>
int main(){
	int i;
	printf("Enter a number: \n");
	scanf("%d",&i);
	if (i%2==0){
		printf("The number is even!\n");
	}
	else{
		printf("The number is odd!\n");
	}
	return 0;
}
