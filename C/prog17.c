// Tutorial 17 - More Functions + For Loops
 
#include <stdio.h>

void printMessage() {
	
	printf("Hello World\n");
}

int main() {
	
	int i;
	
	for(i=1; i<=5; ++i)
		printMessage();
	
	return 0;
	
}
