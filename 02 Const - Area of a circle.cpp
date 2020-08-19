/* this program makes use of math.h header file, so that we can use the function pow()*/
/* this program demonstrates the use of #define to create a constant value*/

#include<stdio.h>
#include<math.h>
#define PI 3.14
int main(){
	int radius;
	double areaf;
	printf("Enter the radius of the circle: \n");
	scanf("%d",&radius);
	printf("\nThe area of the circle: %lf",PI*pow(radius,2) );
	return 0;
}
