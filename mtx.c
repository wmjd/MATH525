#include "mtx.h"

void ref(char * A, int m, int n){
	
	int i = 0;
	int j = 0;	
	char temp;

	for( ; j<n; j++){
		for( ; i<m; i++){
			if(A[i*n+j]){
				printf("LMNZ: A[%d][%d]\n", i, j);
				goto swapToTop;
			}
		}
		i = 0; //reset because not loop scoped
	}
	//i may need to exit here if LMNZ doesnt exist

	swapToTop:
		for(int k = 0; k < n; k++){
			temp = A[k];
			A[k] = A[i*n+k];
			A[i*n+k] = temp;  
		}
}

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

