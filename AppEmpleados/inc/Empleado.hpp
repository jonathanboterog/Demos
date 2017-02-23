class Empleado : public Persona
{
public:

	void CambiaSalario(double s);
	void CambiaAntiguedad(int a);
	void imprime();

private:

	double salario;
	int antiguedad;
};
