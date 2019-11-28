#include<iostream>
#include "Tupla.cpp"
#include<list>
#include<fstream>
#include<string>

class Tabla{
	public:
		list<Tupla> lista;
		string cabecera;
		int tamano;

		Tabla(string tuplas){
			this->cabecera = tuplas;
			tamano = 0;
		}
		bool agregar(Tupla tupla){
			if( buscar(tupla.getpk()).getpk() == "" ){
				lista.push_back(tupla);
				tamano++;
				return true;}
			return false;
		}
		Tupla buscar(string value){
			for(auto i = lista.begin();i != lista.end();i++){
				if(i->getpk() == value)
					return *i;
			}
			return Tupla();
		}
		void eliminar(string value){
			int contador = 0;
			for(auto i = lista.begin();i != lista.end();i++){
				if(i->getpk() == value){
					lista.erase(i);
					tamano--;
					return;
				}
			contador++;
			}
		}
		void print(){
			cout<<cabecera<<endl;
			for(auto i = lista.begin();i != lista.end();i++){
				i->print();
			}
		}

		bool guardar(){

		std::ofstream wf("tabla_curso.dat",std::ios::out | std::ios::binary);
		if(!wf){cout<<"error al abrir"<<endl;return false;}

		for(auto i = lista.begin();i != lista.end();i++){
				i->write(wf);
				
			}
		wf.close();
		if(!wf.good()){cout<<"error de escritura"<<endl;return false;}
		return true;
	}

		bool leer(){
		
		ifstream rf("tabla_curso.dat", std::ios::in | std::ios::binary);
		if (!rf){cout<<"error al abrir"<<endl;return false;}
		cout<<"archivo abierto"<<endl;
		lista.clear();
			cout<<tamano<<flush;
			for(int i = 0;i<tamano;i++)	{
				Tupla* j = new Tupla();
				j -> read(rf);
				lista.insert(lista.end(),*j);


				
			}
		rf.close();
		if(!rf.good()){cout<<"error al cargar"<<endl;return false;}
		cout<<"archivo cargado"<<endl;
		return true;
}
		
};
