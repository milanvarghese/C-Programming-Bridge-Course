/** display from 1 to n using recursion (if n is 4 the output is 1 2 3 4) **/
#include<stdio.h>
void n_numbers(int i, int count){
	if (count==i+1){
		return;
	}
	else{
		printf("%d ",count);
		n_numbers(i,count+1);
	}
}
int main(){
	int n;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	n_numbers(n,1);
	return 0;
}
