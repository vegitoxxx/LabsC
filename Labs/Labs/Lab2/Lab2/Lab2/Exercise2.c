#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	float height,edge;
	printf("Enter a triange edge and its height respectively, please: ");
	if(scanf("%f %f", &height, &edge)==2)//checks if the scanf got 2 float input as it should get  
		printf("\nThe triangle area is %.3f",(height*edge)/2);
	else
		printf("Failed to read float\n");
	

	return 0; 
}
