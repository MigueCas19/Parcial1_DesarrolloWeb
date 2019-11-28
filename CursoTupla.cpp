/*
 * CursoTupla.cpp
 *
 * 
 *      
 */


#include"CursoTupla.hpp"
#include<iostream>
#include<string>

using namespace std;
#ifdef CURSOTUPLA_HPP_
Tupla::Tupla(){
	this->curso_cod = "";
	this->nombre = "";
	this->nombre_unid = "";
	this->creditos = 0;
	this->num_grupos = 0;
	this->primarykey=this->curso_cod;
	
}

Tupla::Tupla(string curso_cod, string nombre, string nombre_unid, int creditos, int num_grupos){
	
	this->curso_cod = curso_cod;
	this->nombre = nombre;
	this->nombre_unid = nombre_unid;
	this->creditos = creditos;
	this->num_grupos = num_grupos;
	this->primarykey=this->curso_cod;
	
}


string Tupla::getCursoCod(){
	return this->curso_cod;
}

string Tupla::getNombre(){
	return this->nombre;
}

string Tupla::getNombre_unid(){
	return this->nombre_unid;
}

int Tupla::getCreditos(){
	return this->creditos;
}

int Tupla::getnum_grupos(){
	return this->num_grupos;
}

string Tupla::getprimarykey(){
	return this->curso_cod;
}

#endif