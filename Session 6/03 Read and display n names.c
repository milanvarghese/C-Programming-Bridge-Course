/** Read n Names and display the same [Two dimensional Array of Strings] **/
#include<stdio.h>
#include<string.h>
int main(){
	int i,n;
	printf("\nEnter the number of names: ");
	scanf("%d",&n);
	char names[n][100];
	for(i=0;i<n;i++){
		printf("\nEnter name %d: ",i+1);
		scanf("%s",&names[i]);
	}
	for(i=0;i<n;i++){
		puts(names[i]);
	}
	return 0;
}
