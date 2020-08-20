//find the max of 3 nos using two different logic
#include<stdio.h>
int main(){
int a,b,c;
a=10;
b=15;
c=20;

//Method 1
if (a>b){
	if (a>c){
		printf("%d is greatest\n",a);
	}
	else{
		printf("%d is greatest\n",c);
	}
	
}
else if(b>c){
	printf("%d is greatest\n",b);
}
else{
	printf("%d is greatest\n",c);
}

//Method 2
int max;
max=(a>b)?((a>c)?a:b):((b>c)?b:c);
printf("%d is greatest\n",max);
return 0;
}
