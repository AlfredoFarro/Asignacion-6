#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n;
	double a;
	double suma=0;
	do
	{
		cout << "Ingrese el valor de n: " << endl;
		cin >> n;
	} while (n<1||n>21);
	do
	{
		cout << "Ingrese el valor de a: " << endl;
		cin >> a;
	} while (a<0.5||a>2);
	for (int i = 1; i <= n; i++)
	{
		suma =suma+ ((pow((-1), (i + 1)))*((((2 * i) - 1)*pow(a, pow(2, (i - 1)))) / (2 * i)));
	}
	cout << "La suma es: " << suma << endl;


	system("pause");
}