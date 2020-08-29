/** Read two values m and n and display from m to n using two functions named forward and backward
	example if m and n is 2 and 5 the output is 2 3 4 5 (uses forward function)
		if m and n is 5 and 2 the outout is 5 4 3 2 (uses backward function) **/
#include<stdio.h>
void forward(int m, int n){
	printf("\n");
	for(int i=m; i<=n;i++){
		printf("%d  ",i);
	}
}
void backward(int m, int n){
	printf("\n");
	for(int i=m; i>=n;i--){
		printf("%d  ",i);
	}
}
int main(){
	int m,n;
	printf("\nEnter two different numbers: ");
	scanf("%d%d",&m,&n);
	if (m<n){
		forward(m,n);
	}
	else{
		backward(m,n);
	}
}
