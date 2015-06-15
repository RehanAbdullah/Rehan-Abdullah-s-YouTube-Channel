#include <iostream>

int main()
{
	int a,b,c;
	
	b = 100;
	c = ++b;
	
	a = c--;
	
	std::cout << a;
	std::cout <<' ' ;
	std::cout << b;
	std::cout <<' ';
	std::cout << c;
	std::cout <<" \n";
	
	return 0;
	
}
