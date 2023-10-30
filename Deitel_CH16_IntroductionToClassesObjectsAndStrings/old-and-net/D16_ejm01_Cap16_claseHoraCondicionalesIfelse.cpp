#include <iostream>

using namespace std;

class Hora{

public:
	Hora();
	void establecehora(int, int, int);
	void imprimeMilitar();
	void imprimeEstandar();

private:
	int hora;
	int minuto;
	int segundo;
};

Hora::Hora()
{
	hora = minuto = segundo = 0;
}

void Hora::establecehora(int h, int m, int s)
{
	if (h >= 0 && h < 24)
		hora = h;
	else
		hora = 0;

	if (m >= 0 && m < 60)
		minuto = m;
	else
		minuto = 0;

	if (s >= 0 && s < 60)
		segundo = s;
	else
		segundo = 0;
}

void Hora::imprimeMilitar()
{
	if (hora < 10)
		cout << "0" << hora << ":";
	else
		cout << "" << hora << ":";

	if (minuto < 10)
		cout << "0" << minuto;
	else
		cout << "" << minuto;

}

void Hora::imprimeEstandar()
{
	if ((hora == 0) || (hora == 12))
		cout << "12" << ":";
	else
		cout << hora % 12 << ":";

	if (minuto < 10)
		cout << "0" << minuto << ":";
	else
		cout << "" << minuto << ":";

	if (segundo < 10)
		cout << "0" << segundo;
	else
		cout << "" << segundo;

	if (hora < 12)
		cout << " AM" << endl;
	else
		cout << " PM" << endl;
}

int main()
{
	Hora h;

	cout << "La hora militar inicial es ";
	h.imprimeMilitar();

	cout << "\nLa hora estandar inicial es ";
	h.imprimeEstandar();

	// Establece valores de hora
	h.establecehora(13, 27, 6);
	cout << "\n\nLa Hora militar despues de estableceHora es: ";
	h.imprimeMilitar();

	cout << "\nLa Hora estandar despues de estableceHora es: ";
	h.imprimeEstandar();

	// Intenta establecer valores invalidos
	h.establecehora(99, 99, 99);
	cout << "\n\nDespues de intentar establecer valores invalidos: "
		 <<	"\nHora militar: ";
	h.imprimeMilitar();

	cout << "\nHora estandar: ";
	h.imprimeEstandar();

	cout << endl;

	return 0;
}
