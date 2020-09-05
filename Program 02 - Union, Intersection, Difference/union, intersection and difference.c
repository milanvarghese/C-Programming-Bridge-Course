#include<stdio.h>
int main(){
	int m,n,i,j;
	printf("\n-------- DATA COLLECTION --------");
	//Set Size
	printf("\nEnter the number of elements in set A and B: ");
	scanf("%d%d",&n,&m);
	int set1[n], set2[m], union_set[n+m],intersect[n],difference[n];
	//Input Set 1
	printf("\nEnter Elements in Set A: ");
	for(i=0;i<n;i++){
	printf("\nEnter element %d: ", i+1);
	scanf("%d",&set1[i]);
	}
	//Input Set 2
	printf("\nEnter Elements in Set B: ");
	for(i=0;i<m;i++){
	printf("\nEnter element %d: ", i+1);
	scanf("%d",&set2[i]);
	}
	//variable declaration
	int union_size,intersection_size,difference_size;
	difference_size=0;
    //Union 
	union_size=0;
	for(i=0;i<n;i++){
		union_set[union_size]=set1[i];
		union_size++;
	}
	int found=0;
	for(j=0;j<m;j++){
		found=0;
		for(i=0;i<n;i++){
			if(set2[j]==union_set[i]){
				found=1;
				break;
			}
		}
		if(found==0){
			union_set[union_size]=set2[j];
			union_size++;
		}
	}
	//Intersection
	intersection_size=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(set1[i]==set2[j]){
				intersect[intersection_size]=set1[i];
				intersection_size++;
				}
			}		
		}
	//Difference
	difference_size=0;
	for(i=0;i<n;i++){
		found=0;
		for(j=0;j<m;j++){
			if(set1[i]==set2[j]){
				found=1;
				break;
			}
		}
		if(found==0){
			difference[difference_size]=set1[i];
			difference_size++;
		}
	}
	printf("\n------------ RESULTS ------------");
	printf("\nSet 1: ");
	for(i=0;i<n;i++){
		printf("%d ",set1[i]);
	}
	printf("\n\nSet 2: ");
	for(i=0;i<m;i++){
		printf("%d ",set2[i]);
	}
	printf("\n\nUnion: ");
	for(i=0;i<union_size;i++){
		printf("%d ",union_set[i]);
	}
	printf("\n\nIntersection: ");
	for(i=0;i<intersection_size;i++){
		printf("%d ",intersect[i]);
	}
	printf("\n\nDifference Set A - Set B: ");
	for(i=0;i<difference_size;i++){
		printf("%d ",difference[i]);
	}
	return 0;
}
