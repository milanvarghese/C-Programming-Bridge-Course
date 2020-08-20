//use switch to check the entered character is vowel or not.
#include<stdio.h>
int main(){
	char c;
	printf("\nEnter a character: ");
	scanf("%c",&c);
	switch(c){
		case 'a':
			printf("\nVowel");
			break;
		case 'e':
			printf("\nVowel");
			break;
		case 'i':
			printf("\nVowel");
			break;
		case 'o':
			printf("\nVowel");
			break;
		case 'u':
			printf("\nVowel");
			break;
		default:
		    printf("\nNot a vowel");
	    	break;
		
	}
    return 0;	
}
