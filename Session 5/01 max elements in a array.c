/** Find the maximum element in an array example if the array is 5,3,4,6,1 the the output is 6 **/
#include<stdio.h>
int arrayMax(int array[],int size){
	int max=0,i;
	for(i=0;i<size;i++){
		if (array[i]>max){
			max=array[i];
		}
	}
	return max;
}

int main(){
	
	int n;
	printf("\nEnter the number of elements in a array: ");
	scanf("%d",&n);
	
	int a[n],i;
	for(i=0; i<n; i++){
	printf("\nEnter Element %d: ",i+1);
	scanf("%d",&a[i]);
	}
	
	printf("\nMax of array is %d",arrayMax(a,n));
	
	return 0;
}
