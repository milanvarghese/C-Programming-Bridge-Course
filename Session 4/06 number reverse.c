/** A function named reverse takes an integer argument and return the reverse of that number.
    example if the number 145 is passed it return 541. **/
#include<stdio.h>
int reverse(int a){
	int rev=0;
	while(a!=0){
	rev=rev*10 + a%10;
	a/=10;
	}
	return rev;
}

int main(){
	int x;
	printf("\nEnter number: ");
	scanf("%d",&x);
	printf("\n%d",reverse(x));
	return 0;
}
