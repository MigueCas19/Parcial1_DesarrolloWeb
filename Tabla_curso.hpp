
#include<string>
#include <iostream>
#include<list>
#include"CursoTupla.hpp"
using namespace std;
#ifndef TABLA_HPP_
#define TABLA_HPP_
class Tabla{
public:

	
	Tabla();
	Tabla(list<Tupla> Tuplas, string nombre, int primkey );

	Tupla buscartupla(string pkey);
	void agregarTupla(string pkey);
	void eraseTupla(string pkey);

	 
private:
	std::string nombre;

	int primkey;

	list<Tupla> Tuplas;
	
	

};


#endif /* TABLA_HPP_*/