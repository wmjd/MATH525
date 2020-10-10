#include "mtx.h"

void rref(char * A, int m, int n){
	ref(A, m, n);
	
	for(int i = m-1; i > 0; i--){
		for(int j = 0; j < n; j++){
			if(A[i*n+j]){
				for(int k = i-1; k >= 0; k--){
					if(A[k*n+j]){
						for(int l = 0; l < n; l++){
							A[k*n+l] ^= A[i*n+l];
						}
					}
				}
				break;
			}
		}
	}
}

void ref(char * A, int m, int n){
	
	static int calls = 0;

	int i = 0;
	int j = 0;	
	char temp;


	/* recursive base case */
	if(!m){
		calls = 0;
//	putchar('\n');
		return;
	}
	/* Find left most nonzero */
	for( ; j<n; j++){
		for( ; i<m; i++){
			if(A[i*n+j]){
				goto swapToTop;
			}
		}
		i = 0; //Reset because i is not loop scoped
	}

	swapToTop:
		for(int k = 0; k < n; k++){
			temp = A[k];
			A[k] = A[i*n+k];
			A[i*n+k] = temp;  
		}
//	putchar('\n');
//	putm(A-calls*n, m+calls,n);
	/* Cancel ones below */
		for(int k = 1; k < m; k++){
			if(A[k*n+j]){		
				for(int l = 0; l < n; l++){
					A[k*n+l] ^= A[l];
				}
			}
		}
//	putchar('\n');
//	putm(A-calls*n, m+calls, n);

	/* Recur with top row removed */
	calls++;
	return ref(A+n, m-1, n);
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

