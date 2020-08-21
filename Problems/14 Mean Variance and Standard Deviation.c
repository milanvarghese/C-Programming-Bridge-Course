//find the mean variance and standard devaiation of n numbers
#include<stdio.h>
#include<math.h>
float variance(float array[], float mean, int n);
float standard_deviation(float variance);

int main(){
	int n,i;
	i=0;
	printf("\nSample Size: ");
	scanf("%d",&n);
	printf("\n-------- DATA COLLECTION --------");
	float num[n],sum;
	sum=0;
	printf("\n");
	while(i<=n-1){
		printf("\nEnter Sample %d: ",i+1);
		scanf("%f",&num[i]);
		sum+=num[i];
		i+=1;
	}
	float mean, sd, vari;
	mean=sum/n;
	printf("\n------------ RESULTS ------------");
	printf("\nSize: %d", n);
	printf("\nSum: %f", sum);
	printf("\nMean: %f", mean);
	printf("\nVariance: %f",variance(num,mean,n));
	printf("\nStandard Deviation: %f",standard_deviation(variance(num,mean,n)));
	return 0;
}

float variance(float array[], float mean, int n){
	float vari, sum;
	int i;
	sum=0;
	for(i=0;i<=n-1;i++){
		sum+=pow((array[i] - mean),2);
	}
	vari=sum/(n-1);
	return vari;
}

float standard_deviation(float variance){
	return sqrt(variance);
}
