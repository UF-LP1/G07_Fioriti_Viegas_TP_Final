#pragma once
#include "Cpaciente.h"
#include "Cregistro.h"
#include <vector>
class Cdonante: public Cpaciente
{
	vector<Cregistro*> registro;
	unsigned int edad;
	float peso;
	bool enfermedades;
	bool meses;
public:
	Cdonante(unsigned int edad, float peso, bool enfermedades, bool meses, string nombre, string apellido, string telefono, char sexo, string dni, time_t fecha, vector<Cregistro*> registro, Cfluido& sangre, Cfluido& medula, Cfluido& plasma);
	~Cdonante();
	unsigned int get_edad();
	float get_peso();
	bool get_enfermedades();
	bool get_meses();
	vector<Cregistro*> get_registro();
	void set_meses(bool meses);
	void nuevo_registro();
	bool VerificarFechaMax();
	string to_string();
	void imprimir();
	friend ostream& operator<<(ostream& out, Cdonante& C);
};

