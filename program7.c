/*
PROGRAM TO CHECK IF A AN INPUT STRING IS PALINDROME OR NOT
*/
#include <stdio.h>

int main(){
	char string[100];
	printf("Enter a string: ");			// message for the user
	scanf("%s", string);				// no & needed because 'string' is the default pointer of character array string[]

	int len = 0;						// find the length of the string
	while(string[len] != '\0'){
		len++;
	}

	int isPalindrome = 1; 				// flag (default set to 1)
	for(int i = 0, j = len-1; i < j; i++, j--){
		if(string[i] != string[j]){		
			isPalindrome = 0;			// flag set to 0
		}
	}

	if(isPalindrome){
		printf("String is a palindrome\n");
	}else{
		printf("String is not a palindrome\n");
	}


	return 0;
}