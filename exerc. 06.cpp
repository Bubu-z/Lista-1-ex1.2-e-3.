#include <iostream>


using namespace std;

int main () {
	
	float valor1, valor2, mediaGeometrica; 
	
	
	// Entrada de valores
	cout << "digite o primeiro valor: ";
	cin >> valor1;
	
	
	cout << "digite o segundo valor: ";
	cin >> valor2;
	
	
	// Cálculo da media Geometrica
	mediaGeometrica = sqrt (valor1 * valor2);
	
	// Resultado
	cout << "a media Geometrica é:" << mediaGeometrica << endl;
	
	
	
	return 0;
	
	
	
	
	
}