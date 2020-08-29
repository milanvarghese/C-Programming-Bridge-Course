//find the sum of the first n numbers using while
#include<stdio.h>
int main(){
	int n,sum;
	sum=0;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	while(n>0){
		sum+=n;
		n-=1;
	}
	printf("The sum of n numbers is: %d", sum);
	return 0;
}
