#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n;
	double a;
	double b;
	double suma = 0;
	do
	{
		cout << "Ingrese el valor de n: " << endl;
		cin >> n;
	} while (n<=0);
	do
	{
		cout << "Ingrese el valor de a: " << endl;
		cin >> a;
	} while (a<1||a>5);
	do
	{
		cout << "Ingrese el valor de b: " << endl;
		cin >> b;
	} while (b<1||b>5);
	for (int i = 1; i <=n; i++)
	{
		suma = suma + (pow(a, (i*b))) / (pow(2, i));
	}
	cout << "Resultado: " << suma << endl;
	system("pause");
}