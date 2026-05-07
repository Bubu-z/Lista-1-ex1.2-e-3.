#include <iostream>
using namespace std;

int main () {
	
	float n1, n2, n3, n4, media; 
	
	
	// Entrada de valores
	cout << "digite o primeiro valor: ";
	cin >> n1;
	
	
	cout << "digite o segundo valor: ";
	cin >> n2;
	
	
	cout << "digite o terceiro valor: ";
	cin >> n3;
	
	
	cout << "digite o quarto valor: ";
	cin >> n4;

	// Cálculo da media
	media = (n1 + n2 + n3 + n4) / 4;
	
	// Sáida 
	cout << "a media aritimetica é:" << media << endl;
	
	
	
	return 0;
	
	
	
	
	
}