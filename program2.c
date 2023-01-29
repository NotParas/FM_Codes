/*
PROGRAM TO TAKE STRING, CHAR, INTEGER AND DOUBLE AS INPUT AND PRINT IT
*/
#include <stdio.h>

int main(){
	int integer;					// integer data type
	char character;					// character data type
	double decimal;					// double data type
	char string[100];				// string (a string is an array of characters)

	// take inputs

	printf("Enter a number: ");			// take inputs
	scanf("%d", &integer);

	printf("Enter a character: ");
	scanf(" %c", &character);

	printf("Enter a decimal number: ");
	scanf("%lf", &decimal);

	printf("Enter a string: ");
	scanf("%s", string);				// will terminate input at space
							// gets() can be used to include spaces

	printf("Number: %d\nCharacter: %c\nDecimal number: %lf\nString: %s\n",
		integer, character, decimal, string); 	// print outputs

	return 0;
}
