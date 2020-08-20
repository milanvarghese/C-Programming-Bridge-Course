//find the sum of given n numbers using while loop (Do not use array)
#include<stdio.h>
int main(){
	int n,sum,num,i;
	sum=0;
	printf("\nEnter the n of number: ");
	scanf("%d",&n);
	i=1;
	num=0;
	while(i<=n){
		printf("\nEnter number %d: ",i);
		scanf("%d",&num);
		sum+=num;
		i+=1;
	}
	printf("The sum of n numbers is: %d", sum);
	return 0;
}
