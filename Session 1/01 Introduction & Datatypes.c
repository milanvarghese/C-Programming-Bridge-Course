#include<stdio.h>
int main(){
	int i;
	char j;
	float k;
	double l;
		
	printf("Enter the number: \n");
	scanf("%d",&i);
	
	printf("Enter the character: ");
	scanf("%c",&j);
	scanf("%c",&j);
	
	printf("Enter the floating number: \n");
	scanf("%f",&k);
	
	printf("Enter the floating number: \n");
	scanf("%lf",&l);
	
	printf("The entered number is: %d\n", i);
	printf("The entered address is: %d\n", &i);
	printf("The size of my memory is: %d\n", sizeof(i));
	
	printf("The entered number is: %c\n", j);
	printf("The entered address is: %d\n", &j);
	printf("The size of my memory is: %d\n", sizeof(j));
	
	printf("The entered number is: %f\n", k);
	printf("The entered address is: %d\n", &k);
	printf("The size of my memory is: %d\n", sizeof(k));
	
	printf("The entered number is: %lf\n", l);
	printf("The entered address is: %d\n", &l);
	printf("The size of my memory is: %d\n", sizeof(l));
	
	return 0;

}
