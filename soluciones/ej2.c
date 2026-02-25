#include<stdio.h>

int main(){
	
	int a[6];
	
	for(int i=0; i<6; i++){
		printf("&a[%d] = %p\n", i, &a[i]);
	} //despues de ejecutar se verifica que &a[5] es mayor que &a[4]
	return 0;
}
