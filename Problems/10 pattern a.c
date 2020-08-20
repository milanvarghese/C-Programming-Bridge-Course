/** display the following in 2 different logic

a) if the input is 4
   1
   1	2
   1	2	3
   1	2	3	4 **/
   
#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter the number n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("\n");
		for(j=1;j<=i;j++){
		printf("%d \t",j);
		}
	}
	return 0;
}
