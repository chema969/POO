#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include "persona.h"
#include <list>
class Jugador:public Persona{
   private:
  int dinero_;
  string codigo_;
  list <struct Apuesta> apuestas_;
   public:
  Jugador(string DNI,string codigo,string nombre="", string apellidos="", string direccion="", string localidad="", string provincia="",string pais="");
  inline void setCodigo( string codigo){codigo_=codigo;}
  inline  string getCodigo() const {return codigo_;}
  inline void setDinero(int dinero){dinero_=dinero;}
  inline int getDinero() const {return dinero_;}
  inline std::list <struct Apuesta> getApuestas() const {return apuestas_;}
  void setApuestas();
};

struct Apuesta{
  int tipo;
  string valor;
  int cantidad;
  };
#endif
