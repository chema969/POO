#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;
class Persona{
 private: 	
   string  DNI_, nombre_, apellidos_, direccion_,localidad_, provincia_, pais_;
 public:
    Persona(string DNI_,string nombre_="", string apellidos_="", string direccion_="", string localidad_="", string provincia_="",string pais_="");

       /*PROC setDNI(string dni) DEV ()
   REQUIERE true
   MODIFICA DNI_
   EFECTOS pone dni a dni_
   */
    inline void setDNI( string dni){DNI_=dni;}

       /*PROC getDNI() DEV (DNI_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve DNI_
   */    
    inline  string getDNI()const{return DNI_;}     

  /*PROC setNombre(string nombre) DEV ()
   REQUIERE true
   MODIFICA nombre_
   EFECTOS pone nombre a nombre_
   */
    inline void setNombre( string nombre){nombre_=nombre;}

       /*PROC getNombre() DEV (nombre_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve nombre_
   */    
    inline  string getNombre()const{return nombre_;}

      /*PROC setApellidos(string apellidos) DEV ()
   REQUIERE true
   MODIFICA apellidos_
   EFECTOS pone apellidos a apellidos_
   */
    inline void setApellidos( string apellidos){apellidos_=apellidos;}

       /*PROC getApellidos() DEV (apellidos_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve apellidos_
   */    
    inline  string getApellidos()const{return apellidos_;}

      /*PROC setDireccion(string direccion) DEV ()
   REQUIERE true
   MODIFICA direccion_
   EFECTOS pone direccion a direccion_
   */
    inline void setDireccion( string direccion){direccion_=direccion;}

       /*PROC getDireccion() DEV (direccion_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve direccion_
   */    
    inline  string getDireccion()const{return direccion_;}

      /*PROC setLocalidad(string localidad) DEV ()
   REQUIERE true
   MODIFICA localidad_
   EFECTOS pone localidad a localidad_
   */
    inline void setLocalidad( string localidad){localidad_=localidad;}

       /*PROC getLocalidad() DEV (localidad_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve localidad_
   */    
    inline  string getLocalidad()const{return localidad_;}

       /*PROC setProvincia(string provincia) DEV ()
   REQUIERE true
   MODIFICA provincia_
   EFECTOS pone provincia a provincia_
   */
    inline void  setProvincia( string provincia){provincia_=provincia;}

       /*PROC getProvincia() DEV (provincia_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve provincia_
   */    
    inline  string getProvincia()const{return provincia_;}

      /*PROC setPais(string pais) DEV ()
   REQUIERE true
   MODIFICA pais_
   EFECTOS pone pais a pais_
   */
    inline void setPais( string pais){pais_=pais;}

       /*PROC getPais() DEV (pais_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve pais_
   */    
    inline  string getPais()const{return pais_;}

      /*PROC getApellidosyNombre() DEV (apellidos+nombre)
   REQUIERE true
   MODIFICA nada_
   EFECTOS devuelve apellidos y nombre 
   */
    string getApellidosyNombre();
};
#endif
