#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n;
	double suma = 0;
	double sumaT;
	do
	{
		cout << "Ingrese n: " << endl;
		cin >> n;
	} while (n <= 0);
	for (int i = 1; i <= n; i++)
	{
		suma = suma + ((pow((-1), (i + 1))) / ((2 * i) - 1));
	}
	sumaT = 4 * suma;
	cout << "Suma: " << sumaT << endl;;

	system("pause");
}