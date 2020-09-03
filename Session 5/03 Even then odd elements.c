/** display the even elements first then the odd elements example if the array is 5,3,4,6,1 the the output is 4 6 5 3 1 **/
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
	
	for(i=0;(i<n);i++){
		if (a[i]%2==0){
			printf("%d ",a[i]);
		}
	}
	for(i=0;(i<n);i++){
		if (a[i]%2!=0){
			printf("%d ",a[i]);
		}
	}
	return 0;
}
