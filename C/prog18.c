// Tutorial 18 - Finding the Minimum Value in an Array

#include <stdio.h>

int minimum (int values[10]) {
	
	int minValue, i;
	minValue = values[0];
	
	for (i=1; i<10; ++i)
		if ( values[i] < minValue)
		minValue = values[i];
	
	return minValue;
}	

int main() {
	
	int scores[10], i, minScore;
	int minimum (int values[10]);
	
	printf("Enter your 10 Scores: \n");
	
	for (i=0; i<10; ++i)
		scanf("%i", &scores[i]);
	
	minScore = minimum (scores);
	printf("\n Minimum Score is %i \n", minScore);
	
	return 0;
	
}
	






