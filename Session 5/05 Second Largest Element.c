/** Find the second largest element in an array
	example if the array is 5,3,4,6,1 and the output is 5 **/

#include<stdio.h>
void secondLargest(int array[],int size){
	int i,largest,second;
	largest=0;
	second=0;
	for(i=0;i<size;i++){
		if(array[i]>largest){
			if(largest!=0){
				second=largest;
			}
			largest=array[i];
		}
	}
	printf("%d",second);
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
	
	secondLargest(a,n);
	
	return 0;
}
