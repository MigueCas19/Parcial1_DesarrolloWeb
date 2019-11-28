#include<iostream>
#include"Tabla.cpp"
using namespace std;

int main(){

	Tabla curso = Tabla("curso_cod | nombre | nombre_unid | creditos | num_grupos");

	for (int i=1;i<10;i++){
		curso.agregar(Tupla("000"+to_string(i),"Bases de Datos","MACC",i,1));
	}
	cout<<curso.guardar()<<endl;
	curso.leer();
	curso.print();
}
