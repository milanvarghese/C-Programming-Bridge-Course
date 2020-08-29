/** find the sum of first n numbers using a recusive function
 	example if n is 4 the output is 10 ie 1+2+3+4 **/
#include<stdio.h>
int sum=0;
int recursive(int a){
	sum+=a;
	if (a==0){
		return sum;
	}
	recursive((a>0)?a-1:a+1);
}
int main(){
	int n;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	printf("\nSum = %d",recursive(n));
	return 0;
}
