class Empleado : public Persona
{
public:

	void CambiaSalario(double s);
	void CambiaAntiguedad(int a);
	void imprime();
	void ObtieneSalario();

private:

	double salario;
	int antiguedad;
};
