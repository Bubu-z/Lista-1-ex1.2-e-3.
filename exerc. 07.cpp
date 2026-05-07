#include <iostream>
using namespace std;

int main () {
	
	float milhas, quilometros; 
	
	
	// Entrada 
	cout << "digite a quantidade de milhas maritimas: ";
	cin >> milhas;
	


	// Conversão
	quilometros = milhas * 1.852;
	
	// Sáida 
	cout << "a quantidades em quilometros é:" 
	<< quilometros << "km" << endl;
	
	
	
	return 0;
	
	
	
	
	
}