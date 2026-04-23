#include <iostream>
using namespace std;

int main () {
	
	float base, altura, area; 
	
	
	// Entrada de dados
	cout << "digite a base do triangulo: ";
	cin >> base;
	
	
	cout << "digite a altura do triangulo: ";
	cin >> altura;
	

	// Cálculo da área
	area = (base * altura) / 2;
	
	// Sáida 
	cout << "a area do triangulo é:" << area << endl;
	
	
	
	return 0;
	
	
	
	
	
}