// Tutorial 19 - Recursive Functions

#include <stdio.h>

int main() {

	unsigned int k;
	unsigned long int factorial (unsigned int l);
	
	for (k=0; k < 11; ++k)
		printf("%2u! = %lu \n", k, factorial (k));
	
	return 0;
	
}

unsigned long int factorial (unsigned int l) {
	
	unsigned long int result;
	
	if (l == 0)
		result = 1;
	else
		result = l * factorial (l - 1);
	
	return result;
	
}


