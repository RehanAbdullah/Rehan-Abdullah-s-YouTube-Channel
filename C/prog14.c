// Tutorial 14 - Character Arrays

#include <stdio.h>

int main() {
	
	char word[] = {'R','e','h','a','n','!'};
	int i;
	
	for (i=0; i<6; ++i )
		printf("%c", word[i]);
	
	printf("\n");
	
	return 0;
	
}
