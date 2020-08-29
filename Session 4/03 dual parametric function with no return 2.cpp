/** Read two values m and n and diaply from m to n using one fuction and one loop 
		the problem 2 is achived here with one function and only one loop is permitted. **/
#include<stdio.h>
void function(int m, int n){
	printf("\n");
	int i=m;
	for(i; (m<n)?i<=n:i>=n; (m<n)?i++:i--){
		printf("%d  ",i);
	}
}

int main(){
	int m,n;
	printf("\nEnter two different numbers: ");
	scanf("%d%d",&m,&n);
	function(m,n);
}
