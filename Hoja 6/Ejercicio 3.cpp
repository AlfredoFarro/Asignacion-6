#include<iostream>
using namespace std;
int main() {
	char tipo;
	int hora;
	char origen;
	int deportes = 0;
	int actualidad = 0;
	int entretenimiento = 0;
	int madrugada = 0;
	int manana = 0;
	int tarde = 0; 
	int noche = 0;
	int nacional = 0;
	int extranjera = 0;
	while (1)
	{
		cout << "Ingrese tipo de noticia: ";
		cin >> tipo;
		tipo = toupper(tipo);
		if (tipo == 'X')
		{
			break;
		}
		cout << "Hora de publicacion: ";
		cin >> hora;
		cout << "Origen: ";
		cin >> origen;
		cout << endl;
		origen = toupper(origen);
		
		if (tipo=='D')
		{
			deportes++;
		}
		else if (tipo == 'A')
		{
			actualidad++;
		}
		else if (tipo == 'E')
		{
			entretenimiento++;
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
		
		if (origen=='N')
		{
			nacional++;
		}
		else if (origen=='E')
		{
			extranjera++;
		}
	}
	cout << endl;
	cout << "Los resultados son:" << endl;
	cout << "-----------------------" << endl;
	cout << "Noticias de Deporte: " << deportes << endl;
	cout << "Noticias de Actualidad: " << actualidad << endl;
	cout << "Noticias de Entretenimiento: " << entretenimiento << endl;
	if (madrugada > manana&&madrugada > tarde&&madrugada > noche)
	{
		cout << "En la MADRUGADA se publicaron mas noticias" << endl;
	}
	else if (manana > madrugada&&manana > tarde&&manana > noche)
	{
		cout << "En la MANIANA se publicaron mas noticias" << endl;
	}
	else if (tarde > madrugada&&tarde > manana&&tarde > noche)
	{
		cout << "En la TARDE se publicaron mas noticias" << endl;
	}
	else if (noche > madrugada&&noche > manana&&noche > tarde)
	{
		cout << "En la NOCHE se publicaron mas noticias" << endl;
	}
	
	if (nacional > extranjera)
	{
		cout << "Predominan las noticias Nacionales" << endl << endl;
	}
	else if (extranjera > nacional)
	{
		cout << "Predominan las noticias del Extranjero" << endl << endl;
	}
	else if (extranjera == nacional)
	{
		cout << "La cantidad de noticias Nacionales y Extranjeras son las mismas" << endl << endl;
	}
	system("pause");
}