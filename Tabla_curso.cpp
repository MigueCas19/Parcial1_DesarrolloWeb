#include"Tabla.hpp"
#include<iostream>
#include <string>
#include <list>
using namespace std;
#ifdef TABLA_HPP_
Tabla::Tabla(){
	
	this->nombre ="";
	this->primkey = -1;

}
Tabla::Tabla(list<Tupla> Tuplas, string nombre, int primkey ){
	this->Tuplas= Tuplas;
	this->nombre=nombre;
	this->primkey=primkey;
}


Tupla Tabla::buscartupla(string pkey){

	

	for(auto i = (this->Tuplas).begin();i != (this->Tuplas).end();i++){
				if(i->getprimarykey() == pkey)
					return *i;
			}
			return Tupla();

	

	
}

void Tabla::agregarTupla(string pkey){
	
	for(auto i = (this->Tuplas).begin();i != (this->Tuplas).end();i++){
				if(i->getprimarykey() == pkey){
					(this->Tuplas).erase(i);
					
					return;
				}

	}
}


void Tabla::eraseTupla(string pkey){
	for(auto i = (this->Tuplas).begin();i != (this->Tuplas).end();i++){
				if(i->getprimarykey() == pkey){
					(this->Tuplas).erase(i);
					
					return;
				}

	}


}



#endif