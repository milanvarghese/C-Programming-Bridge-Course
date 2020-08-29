/** Read two numbers and pass the values to a function called max and dispaly the maximum inside that functions **/
#include<stdio.h>
void max(int m, int n){
	printf("\n");
	if (m>n){
		printf("%d is Greater",m);
	}else{
		printf("%d is Greater",n);
	}
}

int main(){
	int m,n;
	printf("\nEnter two different numbers: ");
	scanf("%d%d",&m,&n);
	max(m,n);
	return 0;
}
