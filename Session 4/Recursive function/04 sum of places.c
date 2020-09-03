/** Find the sum of the digits of a given number using recursion (example if the numebr 145 then the output is 10  ie 1+4+5) **/#include<stdio.h>
#include<stdio.h>
int sum=0;
int sumof(int a){
	if(a==0){
		int x=sum;
		sum=0;
		return x;
	}
	else{
	sum+=a%10;
	sumof(a/=10);
	}
	
}
int main(){
	int n;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	printf("Sum: %d",sumof(n));
	return 0;
}
