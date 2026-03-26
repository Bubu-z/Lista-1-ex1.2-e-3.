#include <iostream>
using namespace std;

int main (int argc, char** argv)
{
	 int diagonal;
	 int area;
	 
	 cout << "Informe o valor da diagonal do quadrado: ";
	 cin >> diagonal;
	 cout << "Informe a area do quadrado: ";
	 cin >> area;
	 
	 area = (diagonal * diagonal) / 2;
	 
	 cout << "A area do quadrado calculada é: " << area;
	 
	 return 0;
	 
}