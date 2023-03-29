#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//gets two floats from the user and it calculates the third using the logrithem method  and prints it   

int main() 
{
	float a, b,x;
	printf("Given the equation a^x=b\nEnter a and b,respectively please: ");
	if (scanf("%f%f", &a, &b) == 2)
	{
		x = log(b) / log(a);
		printf("x is: %g", x);
	}
	else
		printf("Failed to read two floats");
	
	return 0;
}