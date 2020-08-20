#include<stdio.h>
int main(){
	int i,j,k;
	i=80;
	j=12;
	
	k=i+j;
	printf("The result of %d + %d = %d\n",i,j,k);
	
	k=i-j;
	printf("The result of %d - %d = %d\n",i,j,k);
	
	k=i*j;
	printf("The result of %d *+ %d = %d\n",i,j,k);
	
	k=i/j;
	printf("The result of %d / %d = %d\n",i,j,k);
	
	k=i%j;
	printf("The result of %d %% %d = %d\n",i,j,k);
	
	return 0;
}
