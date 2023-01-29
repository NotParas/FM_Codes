/*
PROGRAM TO TAKE AN ARRAY FROM USER AND PRINT ITS SIZE
*/
#include <stdio.h>

int main(){
	int arr[100];
	int n = 0;
	char choice;
	
	do{
		printf("Enter element: ");
		scanf("%d", &arr[n]);			// take user input and store it in array
		n++; 							// count number of user inputs
		printf("Enter 'Y' to enter next element\nOr anything else to quit: ");
		scanf(" %c", &choice);			// ask user to continue or quit
	}while((choice == 'y' || choice == 'Y') && n < 100);

	printf("You entered %d elemnts in the array: ", n);
										// print size of the array
	for(int i = 0; i < n; i++){
		printf("%d ",arr[i]);			// print the array
	}

	return 0;
}