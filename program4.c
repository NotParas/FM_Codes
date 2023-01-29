/*
PROGRAM TO TAKE STRING AS INPUT AND COUNT THE NUMBER OF VOWELS IN IT
*/
#include <stdio.h>
#include <string.h> 					// import for gets() function

int main(){
	char string[100];					// string is an array of characters
	printf("Enter a sentence: ");
	gets(string);

	int i = 0;							// variable to loop through the string
	int vowelCount = 0;					// variable to store number of vowels
	while(string[i] != '\0'){
		switch(string[i]){
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				vowelCount += 1;		// increase vowels by 1
				break;
		};
		/* 
		since none of the cases have 'break',
		line 22 will be executed for all cases 
		*/
		i++;							// increase i to go to the next char
	}
	printf("Vowels: %d", vowelCount);

	return 0;
}