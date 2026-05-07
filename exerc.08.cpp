#include <iostream>
using namespace std;

int main () {
	
	float celsius, fahrenheit; 
	
	
	// Entrada 
	cout << "digite a temperatura em graus Celsius: ";
	cin >> celsius;
	
	
	// Conversão
	fahrenheit = (9 * celsius / 5) +  32;
	
	

	// Sáida 
	cout << "a temperatura em Fahrenheit é:" 
	<< fahrenheit << "F" << endl;
	
	
	
	return 0;
	
	
	
	
	
}