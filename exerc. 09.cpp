#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
	float diametro, raio, area; 
	
	
	// Entrada 
	cout << "digite o diametro do circulo: ";
	cin >> diametro;
	
	
	
	// Cálculo do raio
    raio = diametro / 2;
    
    // Cálculo da area
    area = 3.14159 * pow(raio, 2);
    
	
	// Saída
	cout << "a area do circulo é:" << area << endl;
	
	
	
	return 0;
	
	
	
	
	
}