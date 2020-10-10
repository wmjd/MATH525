//#include "mtx.h"
#include "mtxio.h"

int main(void){
	

	char matrix[3][4]; 

	getm(&matrix[0][0], 3, 4);
	putm(&matrix[0][0], 3, 4);
	
	return 0;

}
