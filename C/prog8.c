//tutorial 8 - Asking for user input

#include <stdio.h>

int main() {
	
	int a =0;
	int b =0;
	
	printf("Please enter a number:");
	scanf("%i",&a);
	printf("You have entered %i \n",a);
	
	printf("Please enter a 2nd number:");
	scanf("%i",&b);
	printf("You have entered %i \n",b);
	
	return 0;
	
}
