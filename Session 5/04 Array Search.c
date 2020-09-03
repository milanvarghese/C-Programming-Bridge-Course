/** Search for a given element in the array
	example if the array is 5,3,4,6,1 and the searching element is 4 then output is Found
	example if the array is 5,3,4,6,1 and the searching element is 2 then output is Not Found **/

#include<stdio.h>
void findElement(int array[],int size,int find){
	int i,loc;
	loc=0;
	for(i=0;i<size;i++){
		if(array[i]==find){
			loc=i;
		}
	}
	if (loc!=0){
		printf("Output is found at Index %d",loc);
	}
	else{
		printf("Output is Not Found!");
	}
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
	
	int find;
	printf("\nEnter the Elements to find: ");
	scanf("%d",&find);
	findElement(a,n,find);
	
	return 0;
}
