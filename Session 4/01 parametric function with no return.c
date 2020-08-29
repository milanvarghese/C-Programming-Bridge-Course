/** Read a no inside the main function and pass this value to a function called print, display from 1 to n. 
example if i input n as 5 in main , the print function should display 1  2  3  4  5 **/
#include<stdio.h>
void result(int n){
	printf("\n");
	for(int i=0; i<n;i++){
		printf("%d  ",i+1);
	}
}
int main(){
	int n;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	result(n);
	return 0;
}
