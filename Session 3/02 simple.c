//Read two numbers and interchange the values using two logics
#include<stdio.h>
int main(){
	int i,j,k;
	printf("Enter two numbers: \n");
	scanf("%d%d",&i,&j);
	
	//Method 1
	k=i;
	i=j;
	j=k;
	printf("The swapped numbers are: %d, %d\n",i,j);
	
	//Method 2
	i-=j;
	j+=i;
	i=j-i;
	printf("The swapped numbers are: %d, %d\n",i,j);
	return 0;
}
