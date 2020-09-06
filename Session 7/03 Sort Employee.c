/** arrange the emplyee details in the order of name **/
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
void sortEmployeeNames(int n){
	char temp[100];
	int tempn;
	int i,j;
	for(j=0;j<n;j++){
		for(i=0;i<n-1;i++){
			if(strcmp(group[i].name,group[i+1].name)>0){
				strcpy(temp,group[i].name);
				strcpy(group[i].name,group[i+1].name);
				strcpy(group[i+1].name,temp);
				tempn=group[i].num;
				group[i].num=group[i+1].num;
				group[i+1].num=tempn;
			}
		}
	}
}
int main(){
	int a;
	printf("\nEnter the number of Employees:");
	scanf("%d",&a);
	printf("\n");
	inputEmployee(a);
	sortEmployeeNames(a);
	for(i=0;i<a;i++){
		printEmployee(i);
	}
	return 0;
}
