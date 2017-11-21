#ifndef RULETA_H
#define RULETA_H
#include <list>
#include "jugador.h"
#include "crupier.h"
#include <string>
using namespace std;
class Ruleta{
  private: 
   int banca_,bola_,vecesbola_;
   list <Jugador> jugadores_;
   Crupier crupier_;
/*PROC deleteJugador(DNI) DEV (true si no existe, false si existe)
   REQUIERE true
   MODIFICA nada
   EFECTOS comprueba si un jugador no existe
   */    
   bool no_existe(const string DNI);
  public:
   Ruleta(Crupier crupier);
   /*PROC getBanca() DEV (banca_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve banca_
   */    
   inline int getBanca() const{return banca_;}
   /*PROC getBanca() DEV (banca_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve banca_
   */    
   inline int getBola() const{return bola_;}
   /*PROC setBanca(int i) DEV (true si es un valor mayor a 0, false si es menor)
   REQUIERE true
   MODIFICA banca_
   EFECTOS Si el valor es mayor que 0, lo pone en banca
   */  
   bool setBanca(int i);
   /*PROC setBola(int i) DEV (true si es un valor mayor o igual a 0 y menor o igual al 36, false de lo contrario)
   REQUIERE true
   MODIFICA bola_
   EFECTOS Si el valor es mayor o igual a 0 y menor o igual al 36, lo pone en bola
   */  
   bool setBola(int i);
   /*PROC getCrupier() DEV (crupier_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve el crupier
   */    
   inline Crupier getCrupier() const{return crupier_;}
   /*PROC setCrupier(Crupier) DEV (_)
   REQUIERE true
   MODIFICA crupier_
   EFECTOS modifica el crupier
   */  
   inline void setCrupier(Crupier c){crupier_=c;}
   /*PROC getJugadores() DEV (jugadores_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve la lista de jugadores
   */    
   inline list <Jugador> getJugadores(){return jugadores_;}
   /*PROC addJugador() DEV (si no existe, true; si existe, false)
   REQUIERE true
   MODIFICA nada
   EFECTOS añade el jugador j si este no existe anteriormente, crea un fichero vacio con su nombre
   */    
   bool addJugador(Jugador j);
/*PROC deleteJugador(Jugador) DEV (-1 si la lista esta vacia,1 si existe el jugador, -2 si no existe)
   REQUIERE true
   MODIFICA jugadores_
   EFECTOS elimina un jugador si este exite
   */    
   int deleteJugador(Jugador j);
   /*PROC deleteJugador(DNI) DEV (-1 si la lista esta vacia,1 si existe el jugador, -2 si no existe)
   REQUIERE true
   MODIFICA jugadores_
   EFECTOS elimina un jugador si este exite
   */    
   int deleteJugador(const string dni);
  /*PROC escribeJugadores() DEV ()
   REQUIERE true
   MODIFICA nada
   EFECTOS escribe la lista de jugadores y sus datos en el fichero "jugadores.txt"
   */    
   void escribeJugadores();
  /*PROC leeJugadores() DEV ()
   REQUIERE true
   MODIFICA jugadores_
   EFECTOS elimina la lista jugadores y escribe los jugadores de fichero "jugadores.txt"
   */    
   void leeJugadores();
   /*PROC giraRuleta() DEV ()
   REQUIERE true
   MODIFICA nada
   EFECTOS da valores aleatorios a la ruleta
   */    
   void giraRuleta();
   /*PROC getPremios() DEV ()
   REQUIERE true
   MODIFICA dinero,banca
   EFECTOS pueba si las apuestas del jugador se han cumplido o no y modifica la banca y el dinero del jugador
   */    
   void getPremios();
   void getEstadoRuleta(int &numjugadores,int &sumdinero,int &vecesbola,int &banca);
};
#endif
