#include "mtx.h"

int main(void){
     	

	char matrix[3][4]; 

	getm(&matrix[0][0], 3, 4);
	printf("\n");
	putm(&matrix[0][0], 3, 4);
	ref(&matrix[0][0], 3, 4);
	
	return 0;

}
