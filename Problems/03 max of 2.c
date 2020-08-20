//find the max of 2 nos using two different logic
#include<stdio.h>
int main(){
int a,b;
a=10;
b=15;

//Method 1
if (a>b)
printf("%d is greatest\n",a);
else
printf("%d is greatest\n",b);


//Method 2
int max;
max=(a>b)?a:b;
printf("%d is greatest\n",max);
return 0;
}
