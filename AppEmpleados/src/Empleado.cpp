#include <_IncludeApp.hpp>

void Empleado::imprime()
{
	cout << "Nombre empleado:" << nombre << endl;
	cout << "Edad:" << edad << endl;
	cout << "Salario:" << salario << endl;
	cout << "Antiguedad:" << antiguedad << endl;
}

void Empleado::CambiaSalario(double s)
{
	salario = s;
}

void Empleado::CambiaAntiguedad(int a)
{
	antiguedad = a;
}
