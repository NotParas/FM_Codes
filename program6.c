/*
PROGRAM TO MAKE A CALCULATOR
*/
#include <stdio.h>
#include <math.h>

#define pi 3.14159

int main(){
	char c;										// for storing user input
	char d;										// message for the user
	printf("'+' for addition\n");
	printf("'-' for subtraction\n");
	printf("'*' for multiplication\n");
	printf("'/' for division\n");
	printf("'e' for exponent\n");
	printf("'t' for trigonometry\n");
	printf("Input: ");	
	scanf(" %c", &c);

	double n1, n2;								// operands
	switch(c){									// switch based on option chosen by the user
	case '+':
		printf("Enter number 1 and number 2: ");
		scanf("%lf %lf", &n1, &n2);
		printf("Sum of numbers = %.3f", n1 + n2);
		break;
	case '-':
		printf("Enter number 1 and number 2: ");
		scanf("%lf %lf", &n1, &n2);
		printf("Difference of numbers = %.3f", n1 - n2);
		break;
	case '*':
		printf("Enter number 1 and number 2: ");
		scanf("%lf %lf", &n1, &n2);
		printf("Product of numbers = %.3f", n1 * n2);
		break;
	case '/':
		printf("Enter number 1 and number 2: ");
		scanf("%lf %lf", &n1, &n2);
		printf("Division of numbers = %.3f", n1 / n2);
		break;
	case 'e':
		printf("Enter number: ");
		scanf("%lf", &n1);
		printf("e^%.3f = %.3f", n1, exp(n1));
		break;
	case 't':
		printf("Enter s/c/t for sin cos and tan: ");
		scanf(" %c", &d);
		switch(d){
		case 's':
		case 'S':
			printf("Enter angle in degree: ");
			scanf("%lf", &n1);
			printf("sin(%.3f) = %.3f", n1, sin((pi*n1)/180));
			break;
		case 'c':
		case 'C':
			printf("Enter angle in degree: ");
			scanf("%lf", &n1);
			printf("cos(%.3f) = %.3f", n1, cos((pi*n1)/180));
			break;
		case 't':
		case 'T':
			printf("Enter angle in degree: ");
			scanf("%lf", &n1);
			printf("tan(%.3f) = %.3f", n1, sin((pi*n1)/180)/cos((pi*n1)/180));
			break;
		default:
			printf("Invalid input\n");
			break;
		};
		break;
	default:
		printf("Invalid input\n");
		break;
	};

	/*
	math.h inbuilt functions have been used for calculating exponents and trignometric values
	*/

	return 0;
}
