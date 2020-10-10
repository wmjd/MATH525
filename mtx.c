#include "mtx.h"

void ref(char * A, int m, int n){
	
	int i = 0;
	int j = 0;
	

	for( ; j<n; j++){
		for( ; i<m; i++){
			if(A[i*n+j]){
				printf("LMNZ: A[%d][%d]", i, j);
				goto swapToTop;
			}
		}
		i = 0; //reset because not loop scoped
	}

	swapToTop:
		;
}
