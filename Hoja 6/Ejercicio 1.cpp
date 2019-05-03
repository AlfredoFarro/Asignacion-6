#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n;
	double a;
	double b;
	double factorial=1;
	double suma=0;

	do
	{
		cout << "Ingrese el valor de a: " << endl;
		cin >> a;
	} while (a<4||a>6);
	do
	{
		cout << "Ingrese el valor de b: " << endl;
		cin >> b;
	} while (b<1||b>3);
	do
	{
		cout << "Ingrese el valor de n: " << endl;
		cin >> n;
	} while (n<1||n>10);

	for (int i = 1; i <= n; i++)
	{
		factorial = factorial * i;
		suma =suma+ (pow((-1), (i + 1))*((pow(a, i))*(pow(b, (i + 1))) / ((a - b)*factorial)));
	}
	cout << "Suma: " << suma << endl;


	system("pause");
}