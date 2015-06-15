// tutorial 7 - The for statement
// A program to calculate the 100th Triangular Number


#include <stdio.h>

int main() {
	
	int n;
	int triNum = 0;
	
	for(n=1; n<=100; n = n +1)
		triNum = triNum + n;
	
	printf("The 100th Triangular Number is %i \n", triNum );
	
	return 0;
	
}
	
	
