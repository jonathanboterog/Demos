#include <_IncludeApp.hpp>

Persona::Persona()
{
	nombre = "";
	edad = 0;
}

Persona::Persona(const string n, const int e)
{
	nombre = n;
	edad = e;
}

Persona::~Persona()
{
	cout << "adios";
}

void Persona::CambiarNombre(string n)
{
	nombre = n;
}

void Persona::CambiarEdad(int e)
{
	edad = e;
}

string Persona::ObtenerNombre()
{
	return nombre;
}

int Persona::ObtenerEdad()
{
	return edad;
}

void Persona::imprime()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}
