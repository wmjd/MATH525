#include "mtx.h"



int main(int argc, char ** argv){
     	
	char matrix[64][64]; 
	
	if(argc != 3){
		printf("usage: mtx <m> <n>\n");
		return 0;
	}
	
	int m = atoi(argv[1]);
	int n = atoi(argv[2]);

	getm(&matrix[0][0], m, n);
	printf("\n");
	putm(&matrix[0][0], m, n);

	ref(&matrix[0][0], m, n);
	printf("\n");
	putm(&matrix[0][0], m, n);
	
	rref(&matrix[0][0], m, n);
	printf("\n");
	putm(&matrix[0][0], m, n);

	return 0;

}
