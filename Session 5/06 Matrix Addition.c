/** find the sum of two matrics of same number of rows and columns **/
#include<stdio.h>
int main(){
	int n1, m1, n2,m2;
	printf("\nEnter the dimension of matrix A: ");
	scanf("%d%d",&n1,&m1);

	printf("\nEnter the dimension of matrix B: ");
	scanf("%d%d",&n2,&m2);

	int i,j;
	int matrixA[n1][m2], matrixB[n2][m2];
	for(i=0;i<n1;i++){
		for(j=0;j<m1;j++){
			printf("\nEnter Element (%d, %d) of matrix A: ",i+1,j+1);
			scanf("%d",&matrixA[i][j]);
		}
	}
	
	for(i=0;i<n2;i++){
		for(j=0;j<m2;j++){
			printf("\nEnter Element (%d, %d) of matrix B: ",i+1,j+1);
			scanf("%d",&matrixA[i][j]);
		}
	}
	
	if ((n1==n2)&&(m1==m2)){
	
	int matrixC[n1][m1];
	for(i=0;i<n1;i++){
		for(j=0;j<m1;j++){
			matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
		}
	}
	
	printf("\nMatrix C\n");
	for(i=0;i<n1;i++){
		printf("\n");
		for(j=0;j<m1;j++){
			printf("%d ",matrixC[i][j]);
		}
	}

	}
	else{
		printf("\nMatrix Dimensions do not Match");
	}
	
	return 0;
}
