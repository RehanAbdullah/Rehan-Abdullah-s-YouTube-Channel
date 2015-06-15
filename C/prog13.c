// Tutorial 13 - Initialising Arrays

#include <stdio.h>

int main() {
	
	int array[10] = {0,1,4,9,16};
	int a;
	
	for (a=5; a<10; ++a)
		array[a] = a * a;
	
	for (a=0; a<10; ++a)
		printf("array[%i] = %i \n", a, array[a]);
	
	return 0;
	
}
