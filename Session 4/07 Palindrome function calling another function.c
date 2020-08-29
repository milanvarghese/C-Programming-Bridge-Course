/** A function takes an integer argument and rturns the reverse of that number. Another function called palindrome takes an integer argument and uses the above reverse function to chek the given number is palindrome or not and return 1 (if palindrome) otherwise 0(not palindrome). dispaly the result in the main function. **/
#include<stdio.h>
int reverse(int a){
	int rev=0;
	while(a!=0){
	rev=rev*10 + a%10;
	a/=10;
	}
	return rev;
}

int palindrome(int x){
	if (x==reverse(x)){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int x;
	printf("\nEnter number: ");
	scanf("%d",&x);
    (palindrome(x)==1)? printf("\nThe number is Palindrome") : printf("\nThe number is Not Palindrome");
	return 0;
}
