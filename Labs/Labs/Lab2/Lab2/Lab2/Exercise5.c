#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() 
{
	double x;
	double Ans;
	printf("Enter x please: ");
	if (scanf("%lf", &x) == 1)
	{
		Ans = x + pow( (double)1/3 *pow(x, (double)4) + 2*pow(x, 0.5), (1.0 / 5));
		printf("Output using %%lf format with 2 digits after dot.\n");// //  %%lf is the way to print % as a string or text,
		printf("x+(1/3x^4+2x^(1/2))^(1/5) = %.2lf\n\n",Ans );
		
		printf("Output using %%g format:\n");	//  %%g is the way to print % as a string or text,
		printf("x+(1/3x^4+2x^(1/2))^(1/5) = %g", Ans);
	}
	else
		printf("Failed to read float number");

	return 0;
}