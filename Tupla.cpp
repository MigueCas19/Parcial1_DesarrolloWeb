#include <iostream>
using namespace std;

class Tupla{
  public:
    string curso_cod;
    string nombre;
    string nombre_unid;
	int creditos;
	int num_grupos;

    Tupla(string curso_cod,string nombre,string nombre_unid,int creditos,int num_grupos){
		this->curso_cod=curso_cod;
		this->nombre=nombre;
      	this->nombre_unid=nombre_unid;
		this->creditos=creditos;
		this->num_grupos=num_grupos;
    }
	Tupla(){
		this->curso_cod="";
		this->nombre="";
      	this->nombre_unid="";
		this->creditos=-1;
		this->num_grupos=-1;

	}
	string getpk(){
		return curso_cod;
	}
    void print(){
      cout<<(curso_cod) + " | "+(nombre)+" | "+(nombre_unid)+" | "+to_string(creditos)+" | "+to_string(num_grupos)<<endl;
    }
		
	void write(std::ostream& f){

		size_t size;
	   size = curso_cod.size();
	   f.write( (char*)&size, sizeof(size_t) );
	   f.write( (char*)curso_cod.c_str(), size );

	   size = nombre.size();
	   f.write( (char*)&size, sizeof(size_t) );
	   f.write( (char*)nombre.c_str(), size );

	   size = nombre_unid.size();
	   f.write( (char*)&size, sizeof(size_t) );
	   f.write( (char*)nombre_unid.c_str(), size );

	   f.write( (char*)&this->creditos, sizeof(int) );

	   f.write( (char*)&this->num_grupos, sizeof(int) );
   }

   void read(std::istream& f){

		size_t size;
	   char *data;
	   f.read( (char*)&size, sizeof(size_t) );

	   data = new char[size+1];
	   f.read( data, size );
	   data[size]='\0';
	   curso_cod = data;
	   delete data;

	   f.read( (char*)&size, sizeof(size_t) );

	   data = new char[size+1];
	   f.read( data, size );
	   data[size]='\0';
	   nombre = data;
	   delete data;

	   f.read( (char*)&size, sizeof(size_t) );

	   data = new char[size+1];
	   f.read( data, size );
	   data[size]='\0';
	   nombre_unid = data;
	   delete data;

	   f.read( (char*)&this->creditos, sizeof(int) );

	   f.read( (char*)&this->num_grupos, sizeof(int) );
   }

};
