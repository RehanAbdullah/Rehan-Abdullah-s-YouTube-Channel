// 7th Tutorial - Arithmetic Operators

#include <iostream>

int main() {
	
	int celsius, fahrenheit;
	
	std::cout <<
	"\n Enter a Temperature: ";
	
	std::cin >> fahrenheit; 
	
	celsius = 5 * (fahrenheit - 32) / 9; 
	
	
	std::cout << "Temperature is ";
	std::cout << celsius; 
	std::cout << " degrees Celsius \n";
	
	return 0;
	
}

