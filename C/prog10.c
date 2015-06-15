// tutorial 10 - The If Statement

#include <stdio.h>

int main() {
	
	int number = 0;
	
	printf("Please enter your number:");
	scanf("%i",&number);
	
	if ( number < 0) 
		printf("Your number is less that 0 \n");
	
	return 0;
	
}
