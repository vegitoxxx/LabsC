#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>




int main()
{

	int num;
	printf("Enter number: ");
	scanf("%d", &num);//get integer number from the user
	printf("\nNumber\tSquare\tCube\n");
	printf("%4d %7d	%4d	\n", num, (int)pow(num, 2),(int)pow(num,3));//print the number,the square and the cube with alligment  
	
	printf("%4d %7d	%4d\n", num+1, (int)pow(num+1, 2), (int)pow(num+1, 3));
	printf("%4d %7d	%4d\n", num+2, (int)pow(num+2, 2), (int)pow(num+2, 3));
	printf("%4d %7d	%4d\n", num+3, (int)pow(num+3, 2), (int)pow(num+3, 3));
	printf("%4d %7d	%4d\n", num + 4, (int)pow(num + 4, 2), (int)pow(num+4, 3));


	return 0;
}
