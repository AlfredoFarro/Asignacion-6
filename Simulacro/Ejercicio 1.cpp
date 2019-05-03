#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n;
	double a;
	double suma=0;
	double suma1;
	double suma2 = 0;
	
	do
	{
		cout << "Ingrese el valor de n: " << endl;
		cin >> n;
	} while (n<=0);
	do
	{
		cout << "Ingrese el valor de a: " << endl;
		cin >> a;
	} while (a<1||a>6);
	if (n==1)
		{
			suma1 = 1 / a;
		}
	for (int i = 1; i <=n; i++)
	{
		if (i == 1)
		{
			suma1 = 1 / a;
		}
		else {
			suma2 = suma2 + 1 / ((pow(2, i)*a));
		}
	}
	suma = suma1 + suma2;
	cout << "La suma es: " << suma << endl;
	system("pause");
}