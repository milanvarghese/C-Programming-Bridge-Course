/* this program makes use of math.h header file, so that we can use the function pow()*/
/* this program demonstrates the use of const keyword to create a constant value*/

#include<stdio.h>
#include<math.h>
int main(){
	int radius;
	double area;
	const float pi=3.1415;
	printf("Enter the radius of the circle: ");
	scanf("%d",&radius);
	printf("\nThe area of the circle : %lf", pi*pow(radius,2));
	return 0;
}
