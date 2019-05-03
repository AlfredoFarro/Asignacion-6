#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int k;
	double suma=0;
	double a;
    int factorial = 0;
	
	do
	{
		cout << "Ingrese k: " << endl;
		cin >> k;
	} while (k<0||k>20);
	cout << "Ingrese a: " << endl;
	cin >> a;
	for (int i = 0; i <= k; i++)
	{
		factorial = factorial * i;
		suma = suma + ((pow(a,i)) / factorial);
	}
	cout << "El resultado de ea sera: " << suma << endl;


	system("pause");
}