/*
PROGRAM TO IMPLEMENT BUBBLE SORT AND SELECTION SORT
*/

#include <stdio.h>

int main(){
	int n;								// store the length of array
	printf("Enter length of array: ");
	scanf("%d", &n);					// input from the user

	int arr[n];	
	int arr1[n];						// the arrays				
	int temp;		
	printf("Enter the array: ");
	for(int i = 0; i < n; i++){
		scanf("%d", &temp);  			// input the array
		arr[i] = temp;
		arr1[i] = temp;
	}

	// bubble sort in ascending order
	
	int c;								// for swapping		
	for(int i = 0; i < n-1; i++){		// n-1 passes are need for bubble sort
		for(int j = 0; j < n-i-1; j++){ 
			if(arr[j] > arr[j+1]){		// if element is greater than next element
				c = arr[j];				// swap
				arr[j] = arr[j+1];
				arr[j+1] = c;
			}
		}
	}

	// print the array
	printf("\nArray sorted in ascending order using bubble sort: ");
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);	
	}

	// selection sort in ascending order

	int min;							// to store the index of smallest element
	for(int i = 0; i < n-1; i++){		// if n-1 elements are sorted it means (n)th element is automatically sorted
		min = i;
		for(int j = i+1; j < n; j++){
			if(arr1[min] > arr1[j]){	// find the index of smallest element
				min = j;
			}
		}
		if(min != i){
			c = arr1[min];				// swap
			arr1[min] = arr1[i];
			arr1[i] = c;
		}
	}

	// print the array
	printf("\nArray sorted in ascending order using selection sort: ");
	for(int i = 0; i < n; i++){
		printf("%d ", arr1[i]);	
	}

	return 0;
}