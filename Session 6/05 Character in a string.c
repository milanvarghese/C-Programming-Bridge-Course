/** search for a given charcter in a string. **/
#include<stdio.h>
#include<string.h>
int main(){
	char name[100];
	printf("\nEnter a string: ");
	gets(name);
	//
	char find;
	int loc,i;
	printf("\nEnter the character to find: ");
	scanf("%c",&find);
	
	for(i=0;i<strlen(name);i++){
		if(name[i]==find){
			loc=i;
			break;
		}
	}
	
	printf("Location: %d",loc+1);
	return 0;
}
