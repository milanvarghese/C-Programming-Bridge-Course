/** Read n names and dsplay them in the ascending order **/
#include<stdio.h>
#include<string.h>
int main(){
	int i,n;
	printf("\nEnter the number of names: ");
	scanf("%d",&n);
	char names[25][25];
	for(i=0;i<n;i++){
		printf("\nEnter name %d: ",i+1);
		scanf("%s",&names[i]);
	}
	//sorting
	int j;
	char temp[25];
	for(i=0;i<=n;i++){
		for(j=i+1;j<=n;j++){
			if(strcmp(names[i],names[j])>0){
				strcpy(temp,names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],temp);
			}
		}
	}
	//printing
	for(i=0;i<=n;i++){
		puts(names[i]);
	}
	return 0;
}
