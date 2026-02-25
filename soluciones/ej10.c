#include<stdio.h>

int main(){
	
	int gigante[10000000];
	
	for(int i=0; i<10000000; i++){
		printf("&gigante[%d] = %p\n", i, &gigante[i]);
	}
	return 0;
}
