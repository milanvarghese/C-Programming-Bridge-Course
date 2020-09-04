//passing a pointer to a function to change the value stored in a variable
void change(int *b){
	printf("\n(from pointer)a= %d",*b);
	*b=50;
	printf("\n(from pointer)a= %d",*b);
}
int main(){
	int a=10;
	printf("(from variable)a= %d",a);
	change(&a);
	printf("\n(from variable)a= %d",a);
	return 0;
}
