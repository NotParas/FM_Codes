/*
PROGRAM TO SORT AN ARRAY USING BUBBLE SORT AND SELECTION SORT BY IMPLEMENTING ALGORIGHTM IN SEPARATE FUNCTIONS
*/
#include <stdio.h>

void bubbleSort(int arr[], int n){
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
}
void selectionSort(int arr[], int n){
	int c;
	int min;
	for(int i = 0; i < n-1; i++){		// if n-1 elements are sorted it means (n)th element is automatically sorted
		min = i;
		for(int j = i+1; j < n; j++){
			if(arr[min] > arr[j]){	// find the index of smallest element
				min = j;
			}
		}
		if(min != i){
			c = arr[min];				// swap
			arr[min] = arr[i];
			arr[i] = c;
		}
	}
}
void printArray(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main(){
	int n;
	printf("Enter length of array: ");
	scanf("%d", &n);

	int arr1[n];
	int arr2[n];
	int t;
	printf("Enter the array: ");
	for(int i = 0; i < n; i++){
		scanf("%d", &t);
		arr1[i] = t;
		arr2[i] = t;
	}

	printf("Sorted array after bubble sort: ");
	bubbleSort(arr1, n);
	printArray(arr1, n);

	printf("Sorted array after selection sort: ");
	selectionSort(arr2, n);
	printArray(arr2, n);

	return 0;
}