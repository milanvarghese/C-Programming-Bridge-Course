/** dislay the elements in the odd position, then the elements in the even position example if the array is 5,3,4,6,1 the the output 3 6 5 4 1 **/
#include<stdio.h>
int main(){
	
	int n;
	printf("\nEnter the number of elements in a array: ");
	scanf("%d",&n);
	
	int a[n],i;
	for(i=0; i<n; i++){
	printf("\nEnter Element %d: ",i+1);
	scanf("%d",&a[i]);
	}
	
	for(i=1;((i%2!=0)&&(i<n));i+=2){
		printf("%d ",a[i]);
	}
		for(i=0;((i%2==0)&&(i<n));i+=2){
		printf("%d ",a[i]);
	}
	return 0;
}
