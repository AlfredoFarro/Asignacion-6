#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n;
	double a;
	double x;
	double y;
	double suma=0;
	double sumaI=0;
	double sumaP=0;
	do
	{
		cout << "Ingrese n: " << endl;
		cin >> n;
	} while (n<1||n>30);
	cout << "Ingrese el valor de a: " << endl;
	cin >> a;
	cout << "Ingrese el valor de x: " << endl;
	cin >> x;
	cout << "Ingrese el valor de y: " << endl;
	cin >> y;
	for (int i = 1; i <= n; i++)
	{
		if (i%2==0)
		{
			sumaP = sumaP + ((3 * i*y) / (pow(2, (i - 1))*pow(a, (i - 1))));
		}
		else
		{
			sumaI = sumaI - ((3 * i*x) / (pow(2, (i - 1))*pow(a, (i - 1))));
		}
	}
	suma = sumaI+sumaP;
	cout << "La sumatoria es: " << suma << endl;




	system("pause");
}