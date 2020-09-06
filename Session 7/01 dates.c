/** Create a structure for data having dd,mm and yy. where mm is represented as character array for storing name of the month. Read two dates and check they are same or not. **/
#include<stdio.h>
#include<string.h>

struct date{
	int dd,yy;
	char mm[15];
};

struct date d[1];

void inputDate(int i){
	printf("\nEnter day: ");
	scanf("%d",&d[i].dd);
	printf("\nEnter month: ");
	scanf("%s",&d[i].mm);
	printf("\nEnter year: ");
	scanf("%d",&d[i].yy);
}

void printDate(int i){
	printf("\n\n%d-%s-%d",d[i].dd,d[i].mm,d[i].yy);
}

int main(){
	inputDate(0);
	inputDate(1);
	printDate(0);
	printDate(1);
	return 0;
}
