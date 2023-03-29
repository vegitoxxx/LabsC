#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char lc;				//lc means lower case 
	
	printf("Enter an English lower case letter, please: ");
	if ((scanf("%c", &lc) == 1) && (lc >= 'a' && lc <= 'z'))//checks the scanf and if the letter we inserted is lowercase
	{
		
		printf("The ascii code of '%c' is %d.\n", lc, lc);
		printf("The ascii code of '%c' is %d.\n", lc - 'a' + 'A', lc - 'a' + 'A');
	}
	else
		printf("\nFailed to read,Please insert lowercase character");

	return 0;
}

