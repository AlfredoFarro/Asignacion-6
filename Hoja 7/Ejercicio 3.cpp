#include<iostream>
using namespace std;
int main() {
	int n;
	int p1;
	int p2;
	int p3;
	int aprob3=0;
	float aprobpor;
	int aprob2=0;
	int aprobF;
	int mal3=0;
	int noex;
	do
	{
		cout << "Ingrese Cantidad de alumnos: ";
		cin >> n;
		if (n<1||n>40)
		{
			cout << "DATO INCORRECTO" << endl << endl;
		}
	} while (n<1||n>40);
	for (int i = 1; i <= n; i++)
	{
		cout << "Para el Alumno " << i << endl;
		do
		{
			
			cout << "Respuesta en la Pregunta 1: ";
			cin >> p1;
			
			
		} while (p1<1||p1>5);
		do
		{
			cout << "Respuesta en la Pregunta 2: ";
			cin >> p2;
		} while (p2<1||p2>5);
		do
		{
			cout << "Respuesta en la Pregunta 3: ";
			cin >> p3;
			cout << endl;
		} while (p3<1||p3>5);
			
		if (p1==3&&p2==1&&p3==4)
		{
			aprob3++;
		}
		if ((p1==3&&p2==1&&p3!=4)||(p1!=3&&p2==1&&p3==4))
		{
			aprob2++;
		}
		if (p3!=4)
		{
			mal3++;
		}
	}
	aprobpor = (100.00 * aprob3) / n;
	aprobF = aprob3 + aprob2;
	noex = 40 - n;
	cout << "El porcentaje de alumnos que hizo bien las tres preguntas: " << aprobpor << "%" << endl;
	cout << "Cantidad de alumnos aprobados: " << aprobF << endl;
	cout << "Cantidad de alumnos que hizo mal la pregunta 3: " << mal3 << endl;
	cout << "Cantidad de alumnos que no rindieron el examen: " << noex << endl;

	system("pause");
}