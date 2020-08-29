//check the given number is positive, negative or zero using if else
#include<stdio.h>
int main(){
	int i;
	printf("Enter a number: \n");
	scanf("%d",&i);
	if (i>0){
		printf("\nThe number is positive");
	}
	else if(i<0){
		printf("\nThe number is negative");
	}
	else{
		printf("\nThe number is zero");
	}
	return 0;
}
