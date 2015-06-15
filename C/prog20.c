
// Tutorial 20 - Working with Structures!

#include <stdio.h>

int main() {
	
	struct date
	{
		int day;
		int month;
		int year;
	};
	
	struct date today;
	
	today.day = 13;
	today.month = 6;
	today.year = 2015;
	
	printf("Today's date is %i/%i/%i \n",today.day, 
		today.month, today.year % 100);
	
	return 0;
	
}
	
	
