// String length
#include<stdio.h>
int strln(char string[]){
	int size=0;
	int i;
	for(i=0;string[i]!='\0';i++){
		size++;
	}
	return size;
}
int main(){
	printf("%d",strln("Hello"));
	return 0;
}
