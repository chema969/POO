#include <string>
#include "jugador.h"
#include <list>
#include <cstdlib>
#include <fstream>
using namespace std;
Jugador::Jugador(string DNI,string codigo,string nombre, string apellidos, string direccion, string localidad, string provincia,string pais):Persona(DNI,nombre,apellidos,direccion,localidad,provincia,pais){
dinero_=1000;
codigo_=codigo;
}

void Jugador::setApuestas(){
std::string aux;
ifstream archivo; 
aux=getDNI()+".txt";
archivo.open(aux.c_str());
apuestas_.clear();
while(std::getline(archivo,aux,',')){
  struct Apuesta a;
  a.tipo=atoi(aux.c_str());
  std::getline(archivo,a.valor,',');
  std::getline(archivo,aux,'\n');
  a.cantidad=atoi(aux.c_str());
  apuestas_.push_back(a);
  }
archivo.close();
}
