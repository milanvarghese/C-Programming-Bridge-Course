//Changing the value of a variable using a pointer
#include<stdio.h>
int main(){
	int a, *b;
	a=10;
	b=&a;
	printf("a=%d",a);
	
	*b=20;
	printf("\na=%d",a);
	
	return 0;
}
