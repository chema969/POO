#ifndef CRUPIER_H
#define CRUPIER_H
#include <string>
#include "persona.h"
class Crupier:public Persona{
private:
  string codigo_;
public:
  Crupier(string DNI,string codigo,string nombre="", string apellidos="", string direccion="", string localidad="", string provincia="",string pais=""):Persona(DNI,nombre,apellidos,direccion,localidad,provincia,pais){codigo_=codigo;}
 
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
  inline  string getCodigo()const{return codigo_;}
};
#endif
