#include <iostream>
using namespace std;

int main () {
	
	float diametro, raio, area;
	const float pi = 3.14159; 
	
	
	// Entrada 
    cout << "digite o diametro do circulo: ";
	cin >> diametro ; 
	
	
	// Calculos
	raio = diametro / 2;
	area =  pi * raio * raio;
	
	

	// Sáida 
	cout << "a area do circulo é:" 
	<< area << endl;
	
	
	
	return 0;
	
	
	
	
	
}