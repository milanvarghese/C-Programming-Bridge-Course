//Changing values using both pointers and variables
#include<stdio.h>
int main(){
	int a, *b;
	a=10;
	b=&a;
	printf("a=%d",a);
	
	*b=20;
	printf("\n\na=%d",a);
	printf("\nb=%d",*b);
	
	a=40;
	printf("\n\na=%d",a);
	printf("\nb=%d",*b);
	return 0;
}
