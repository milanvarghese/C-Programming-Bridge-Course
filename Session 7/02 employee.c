/** Read n emplyees and search for an employee. **/
#include<stdio.h>
#include<string.h>

int i;
struct employee{
	int num;
	char name[20];
};

struct employee group[100];

void inputEmployee(int n){
	for(i=0;i<n;i++){
		group[i].num=i;
		printf("\nEnter Employee Name: ");
		scanf("%s",&group[i].name);
	}
}

void printEmployee(int k){
	printf("\n\n%d %s",group[k].num,group[k].name);
}

void findEmployee(int a){
	int loc;
	char find[100];
	printf("\nEnter Employee name to search for: ");
	scanf("%s",&find);
	for(i=0;i<a;i++){
		if(group[i].name==find){
			loc=i;
			break;
		}
	}
	printEmployee(loc);
}

int main(){
	int a;
	printf("\nEnter the number of Employees:");
	scanf("%d",&a);
	printf("\n");
	inputEmployee(a);
	findEmployee(a);
	return 0;
}
