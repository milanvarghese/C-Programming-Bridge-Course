/** A function named min takes two arguments and return the minimum of these two arguments. Use the min function to find the minimum of three numbers in the main functions **/
#include<stdio.h>
int min(int a, int b){
	if(a<b){
		return a;
	}else{
		return b;
	}
}

int main(){
	int x,y,z,mini;
	printf("\nEnter three numbers: ");
	scanf("%d%d%d",&x,&y,&z);
	mini=min(x,y);
	mini=min(mini,z);
	printf("Minimum: %d",mini);
	return 0;
}
