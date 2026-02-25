#include<stdio.h>

int main(){
	
	int a[5], i=0;
	
	printf("&a[%d] = %p\n", i-1, &a[i-1]);
	printf("&a[%d] = %p\n", i+5, &a[i+5]);
	
	for (int i=0; i<5; i++){
		printf("&a[%d] = %p\n", i, &a[i]);
	}
	return 0;
}
