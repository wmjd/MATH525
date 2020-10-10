#include "mtxio.h"

void getm(char * A, int m, int n){


	for(int i = 0; i < m; i++){
		for(int j =0; j < n; j++){
			char ch;
			while((ch = getchar()) == '\n')
				;
			A[i*n+j] = ch - '0';
		}
		//printf("\n");
	}
}

void putm(char * A, int m, int n){
	for(int i = 0; i < m; i++){
		for(int j =0; j < n; j++){
			putchar(A[i*n+j] + '0');
		}
		printf("\n");
	}

}

