#include<stdio.h>
void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size); 

int main() {
	int a = 1, b = 2, c = 3;
	int a1[3]={1,2,3},b2[3]={3,4,5};
	printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
	swapValue(&a,&b,&c);
	printf("After swap function: a= %d, b=%d, c=%d\n", a, b, c);
	swapArray(a1,b2,sizeof(a1)/sizeof(a1[0]));
	for(int i=0;i<3;i++){
		printf("%d ",a1[i]);
	}
	printf("\n");
	for(int i=0;i<3;i++){
		printf("%d ",b2[i]);
	}
}

void swapValue(int *a, int *b, int *c){
	int t=*a;
	*a=*b;*b=*c;*c=t;
}
void swapArray(int a[], int b[], int size){
	int temp;
	for(int i=0;i<size;i++){
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
}
