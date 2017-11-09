#include <string>
#include "jugador.h"
#include <list>
#include <fstream>

Jugador::Jugador(string DNI,string codigo,string nombre, string apellidos, string direccion, string localidad, string provincia,string pais):Persona(DNI,nombre,apellidos,direccion,localidad,provincia,pais){
dinero_=1000;
codigo_=codigo;
}

void Jugador::setApuestas(){
std::string aux;
ifstream archivo; 
archivo.open(getDNI()+".txt");
apuestas_.clear();
while(std::getline(archivo,aux,',')){
  struct Apuesta a;
  a.tipo=std::stoi(aux);
  std::getline(archivo,a.valor,',');
  std::getline(archivo,aux,'\n');
  a.cantidad=std::stoi(aux);
  apuestas_.push_back(a);
  }
archivo.close();
}
