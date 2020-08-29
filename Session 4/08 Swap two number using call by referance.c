/** interchage the values of two variables using call by reference. **/
#include<stdio.h>
void swap(int *x, int *y){
	*x *= *y;
	*y= *x / *y;
	*x /= *y;
}
int main(){
	int a,b;
	printf("\nEnter two numbers: ");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("\nValue of variable a: %d",a);
	printf("\nValue of variable b: %d",b);
	return 0;
}
