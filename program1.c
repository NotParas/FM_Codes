/*
PROGRAM TO PRINT THE FOLLOWING PATTER:
*
**
***
****
*****
*/
#include <stdio.h>

int main(){
	int n = 5;
	for(int i = 0; i < n; i++){ 			// outer for loop controls each line
		for(int j = 0; j <= i; j++){ 		// inner for loop controls each character
			printf("*"); 					// will print i stars on the same line
		}
		printf("\n"); 						// go to the next line
	}

	return 0; 								// exit code
}