/** display from n to 1 using recursion (if n is 3 the output is 3 2 1) **/
#include<stdio.h>
void display(int i){
	if (i==0){
		return;
	}
	printf("%d ",i);
	display((i>0)?i-1:i+1);
}
int main(){
	int n;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	display(n);
	return 0;
}
