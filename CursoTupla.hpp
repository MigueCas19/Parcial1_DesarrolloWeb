
#include <string>
#include <iostream>
using namespace std;
#ifndef CURSOTUPLA_HPP_
#define CURSOTUPLA_HPP_


class Tupla {
public:

	Tupla();

	Tupla(string curso_cod, string nombre, string nombre_unid, int creditos, int num_grupos);
 	 

	
	
	std::string getCursoCod();

	std::string getNombre();

	std::string getNombre_unid();

	int getCreditos();

	
	int getnum_grupos();

	string getprimarykey();

private:
	/* Atributos */
	std::string curso_cod;			/* id de estudiante */
	std::string nombre; 		/* nombre de estudiante */
	std::string nombre_unid;	/* apellido de estudiante */
	int creditos;
	int num_grupos;
	std::string primarykey;
	
	

};

#endif /* CURSOTUPLA_HPP_*/
