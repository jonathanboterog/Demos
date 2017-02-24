//============================================================================
// Name        : AppEmpleados.cpp
// Author      : jbotero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <_IncludeApp.hpp>

int main()
{
	Empleado e;
	Persona * p;

	p = new Persona("Pedro", 30);
	p->imprime();

	cout << "-----------------" << endl;

	e.CambiarNombre("Juan");
	e.CambiarEdad(25);
	e.CambiaAntiguedad(3);
	e.CambiaSalario(600);

	e.imprime();

	return 0;
}
