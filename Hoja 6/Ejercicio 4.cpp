#include<iostream>
using namespace std;
int main() {
	char tipo;
	int hora;
	char origen;
	int ecologica = 0;
	int sanitaria = 0;
	int radioactiva = 0;
	int madrugada = 0;
	int manana = 0;
	int tarde = 0;
	int noche = 0;
	int naturaleza = 0;
	int hombre = 0;
	while (1)
	{
		cout << "Ingrese tipo de emergencia: ";
		cin >> tipo;
		tipo = toupper(tipo);
		if (tipo == 'F')
		{
			break;
		}
		cout << "Hora de emergencia: ";
		cin >> hora;
		cout << "Origen de la emergencia: ";
		cin >> origen;
		cout << endl;
		origen = toupper(origen);

		if (tipo == 'E')
		{
			ecologica++;
		}
		else if (tipo == 'S')
		{
			sanitaria++;
		}
		else if (tipo == 'R')
		{
			radioactiva++;
		}

		if (hora >= 0 && hora <= 5)
		{
			madrugada++;
		}
		else if (hora >= 6 && hora <= 12)
		{
			manana++;
		}
		else if (hora >= 13 && hora <= 17)
		{
			tarde++;
		}
		else if (hora >= 18 && hora <= 23)
		{
			noche++;
		}

		if (origen == 'N')
		{
			naturaleza++;
		}
		else if (origen == 'I')
		{
			hombre++;
		}
	}
	cout << endl;
	cout << "Los resultados son:" << endl;
	cout << "-----------------------" << endl;
	cout << "Emergencia ecologica: " << ecologica << endl;
	cout << "Emergencia sanitaria: " << sanitaria << endl;
	cout << "Emergencia radioactiva: " << radioactiva << endl;
	if (madrugada > manana&&madrugada > tarde&&madrugada > noche)
	{
		cout << "En la MADRUGADA se publicaron mas emergencias" << endl;
	}
	else if (manana > madrugada&&manana > tarde&&manana > noche)
	{
		cout << "En la MANIANA se publicaron mas emergencias" << endl;
	}
	else if (tarde > madrugada&&tarde > manana&&tarde > noche)
	{
		cout << "En la TARDE se publicaron mas emergencias" << endl;
	}
	else if (noche > madrugada&&noche > manana&&noche > tarde)
	{
		cout << "En la NOCHE se publicaron mas emergencias" << endl;
	}

	if (naturaleza > hombre)
	{
		cout << "Predominan las emergencias por naturaleza" << endl << endl;
	}
	else if (hombre > naturaleza)
	{
		cout << "Predominan las emergencias por intervencion del hombre" << endl << endl;
	}
	else if (hombre == naturaleza)
	{
		cout << "La cantidad de emergncias por naturaleza y por intervencion del hombre son las mismas" << endl << endl;
	}
	system("pause");
}