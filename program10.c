/*
PROGRAM TO ENTER A 4X4 MATRIX AND CALCULATE THE SUM OF ALL ITS ELEMENTS AND BOTH DIAGONALS
*/
#include <stdio.h>

int main(){
	int matrix[4][4];
	int n = 4;
	int t;
	int sum = 0;
	int sumpd = 0;
	int sumsd = 0;

	printf("Enter 4x4 matrix row wise:\n");
	for(int i = 0; i < n; i++){
		printf(": ");
		for(int j = 0; j < n; j++){
			scanf("%d", &t);
			matrix[i][j] = t;
			sum += t;				// calculate the sum
			if(i == j){
				sumpd += t;			// sum of primary diagonal
			}
			if(j == n-i-1){
				sumsd += t;			// sum of secondary diagonal
			}
		}
	}
	

	printf("The matrix entered is: \n");			// print the matrix
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	printf("Sum of all elements = %d\n", sum);		// print all the sums
	printf("Sum of primary diagonal = %d\n", sumpd);
	printf("Sum of secnodary diagonal = %d\n", sumsd);

	return 0;
}
