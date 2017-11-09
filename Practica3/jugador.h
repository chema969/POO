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
   /*PROC CONSTRUCTOR Jugador(string DNI,string codigo,string nombre="", string apellidos="", string direccion="", string localidad="", string provincia="",string pais="") DEV ()
   REQUIERE creación del objeto
   MODIFICA DNI,nombre,apellidos,direccion,localidad,provincia,pais,dinero_,codigo_
   EFECTOS inicializa los datos del jugador, se debe pasar como parametro el DNI y el codigo,pone el dinero a 1000
   */
  Jugador(string DNI,string codigo,string nombre="", string apellidos="", string direccion="", string localidad="", string provincia="",string pais="");
   /*PROC setCodigo(string codigo) DEV ()
   REQUIERE true
   MODIFICA codigo_
   EFECTOS pone codigo a codigo_
   */
  inline void setCodigo( string codigo){codigo_=codigo;}
       /*PROC getCodigo() DEV (codigo_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve codigo_
   */    
  inline  string getCodigo() const{return codigo_;}
   /*PROC setDinero(int dinero) DEV ()
   REQUIERE true
   MODIFICA dinero_
   EFECTOS pone dinero a dinero_
   */
  inline void setDinero(int dinero){dinero_=dinero;}
       /*PROC getDinero() DEV (dinero_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve dinero_
   */    
  inline int getDinero()const{return dinero_;}
       /*PROC getApuestas() DEV (apuestas_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve la lista apuestas_
   */    
  inline std::list <struct Apuesta> getApuestas()const{return apuestas_;}
       /*PROC setApuestas() DEV ()
   REQUIERE un fichero con el nombre del dni del jugador, donde salgas apuestas de modo "tipo,valor,cantidad"
   MODIFICA nada
   EFECTOS lee el fichero con el nombre del dni del jugador y escrive sus apuestas en una lista
   */    
  void setApuestas();
};

struct Apuesta{
  int tipo;
  string valor;
  int cantidad;
  };
#endif
