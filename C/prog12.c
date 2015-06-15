// Tutorial 12 - Working with Arrays

#include <stdio.h>

int main() {
	
	int arr[4];
	int index;
	
	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 300;
	
	arr[3] = arr[0] + arr[1];
	
	for (index = 0; index < 4; ++index)
		printf("arr[%i] = %i\n", index, arr[index]);
	
	return 0;
	
}


