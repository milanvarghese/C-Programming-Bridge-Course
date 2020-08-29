#include<stdio.h>
int main(){
	int i,j,k;
	i=10;
	j=5;
	k=i&j;
	printf("The result of %d & %d = %d\n",i,j,k);
	k=i|j;
	printf("The result of %d | %d = %d\n",i,j,k);
	k=i^j;
	printf("The result of %d ^ %d = %d\n",i,j,k);
	return 0;
}
