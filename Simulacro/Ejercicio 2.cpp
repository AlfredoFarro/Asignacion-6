#include<iostream>
using namespace std;
int main() {
	char ingreso;
	int hora;
	char dispositivo;
	int lima = 0;
	int otraRegi = 0;
	int otroPais = 0;
	int madrugada = 0;
	int manana = 0;
	int tarde = 0;
	int noche = 0;
	int celular = 0;
	int tablet = 0;
	int compu = 0;
	while (1)
	{
		cout << "Ingrese lugar de ingreso: ";
		cin >> ingreso;
		ingreso = toupper(ingreso);
		if (ingreso == 'G')
		{
			break;
		}
		cout << "Hora de publicacion: ";
		cin >> hora;
		cout << "Ingrese tipo de dispositivo: ";
		cin >> dispositivo;
		cout << endl;
		dispositivo = toupper(dispositivo);

		if (ingreso == 'A')
		{
			lima++;
		}
		else if (ingreso == 'B')
		{
			otraRegi++;
		}
		else if (ingreso == 'C')
		{
			otroPais++;
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

		if (dispositivo == 'C')
		{
			celular++;
		}
		else if (dispositivo == 'T')
		{
			tablet++;
		}
		else if (dispositivo=='U')
		{
			compu++;
		}
	}
	cout << endl;
	cout << "Los resultados son:" << endl;
	cout << "-----------------------" << endl;
	cout << "Lugar de Ingreso en Lima: " << lima << endl;
	cout << "Lugar de Ingreso en regiones: " << otraRegi << endl;
	cout << "Lugar de Ingreso en otros paises: " << otroPais << endl;
	if (madrugada > manana&&madrugada > tarde&&madrugada > noche)
	{
		cout << "En la MADRUGADA se realizaron mas accesos" << endl;
	}
	else if (manana > madrugada&&manana > tarde&&manana > noche)
	{
		cout << "En la MANIANA se realizaron mas accesos" << endl;
	}
	else if (tarde > madrugada&&tarde > manana&&tarde > noche)
	{
		cout << "En la TARDE se realizaron mas accesos" << endl;
	}
	else if (noche > madrugada&&noche > manana&&noche > tarde)
	{
		cout << "En la NOCHE se realizaron mas accesos" << endl;
	}

	if (celular > tablet&&celular > compu)
	{
		cout << "Predomina el uso de los celulares" << endl << endl;
	}
	else if (tablet > celular&&tablet > compu)
	{
		cout << "Predomina el uso de la tablet" << endl << endl;
	}
	else if (compu > celular&&compu > tablet)
	{
		cout << "Predomina el uso del Computador" << endl << endl;
	}
	else if (tablet == celular && tablet == compu && celular == compu)
	{
		cout << "La cantidad de usos en celulares, tablets y computadores son las mismas " << endl << endl;
	}
	system("pause");
}