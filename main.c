#include "mtx.h"


#define N 5
#define M 5

int main(void){
     	

	char matrix[M][N]; 

	getm(&matrix[0][0], M, N);
	printf("\n");
	putm(&matrix[0][0], M, N);

	ref(&matrix[0][0], M, N);
	printf("\n");
	putm(&matrix[0][0], M, N);
	
	rref(&matrix[0][0], M, N);
	printf("\n");
	putm(&matrix[0][0], M, N);

	return 0;

}
