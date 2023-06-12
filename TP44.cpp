#include <iostream>
using namespace std;
int CalcularPromedio(int a, int b, int c);
int main ()
{
	int n1, n2, n3;
	cout<<"Ingrese numero 1: ";
	cin>>n1;
	cout<<"Ingrese numero 2: ";
	cin>>n2;
	cout<<"Ingrese numero 3: ";
	cin>>n3;
	cout<<"El promedio es: "<<CalcularPromedio(n1, n2, n3)<<endl;
	return 0;
}
int CalcularPromedio(int a, int b, int c)
{
	int promedio;
	promedio=(a+b+c)/3;
	return promedio;
}