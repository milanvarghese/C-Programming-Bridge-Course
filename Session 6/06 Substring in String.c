/** Search for a substring in a given string
example search for bc in abcd **/
#include<stdio.h>
#include<string.h>
int main(){
	char name[100];
	printf("\nEnter a string: ");
	gets(name);
	//
	char find[100];
	int loc,i,j;
	printf("\nEnter the character to find: ");
	gets(find);
	
	for(i=0;i<strlen(name);i++){
		for(j=0;j<strlen(find);j++){
			if(name[i]==find[j]){
			loc=i;
			break;
			}
		}
	}
	
	printf("Location: %d",loc);
	return 0;
}
