using namespace std;

class Persona
{
public:
	Persona();
	Persona(const string nom, const int edad);
	virtual ~Persona();

	void CambiarNombre(string n);
	void CambiarEdad(int e);
	string ObtenerNombre();
	int ObtenerEdad();
	virtual void imprime();

protected:
	string nombre;
	int edad;

};
