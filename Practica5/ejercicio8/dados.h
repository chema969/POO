#ifndef DADOS_H
#define DADOS_H
#include <iostream>
#include <vector>
using namespace std;
  class Dados{
    private: 
     int d1_,d2_,l1_,l2_,c1_,c2_; 
     std::vector <int> v1_,v2_;
   /*PROC rellenavector1() DEV ()
   REQUIERE setDado1()
   MODIFICA v1_
   EFECTOS rellena un vector con los ultimos lanzamientos del dado 1
   */
     void rellenavector1();
     /*PROC rellenavector2() DEV ()
   REQUIERE setDado2()
   MODIFICA v2_
   EFECTOS rellena un vector con los ultimos lanzamientos del dado 2
   */
     void rellenavector2();
    public:
  /*PROC CONSTRUCTOR Dados()
   REQUIERE creación del objeto 
   MODIFICA d1_,d2_,l1_,l2_,c1_,c2_,v1_,v2_
   EFECTOS inicializa d1_ y d2_ a 1,inicializa c1_,c2_,l1_,l2_ a 0, reserva memoria del tamaño de 5 enteros a v1_ y v2_ y los inicializa a 0
   */
    Dados();


   /*PROC lanzamiento() DEV ()
   REQUIERE true
   MODIFICA d1_,d2_,l1_,l2_,c1_,c2_
   EFECTOS lanza ambos dados
   */
    void lanzamiento();
     /*PROC getDado1() DEV (d1_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve d1_
   */
     inline int getDado1 ()const{return d1_;}
 /*PROC getDado2() DEV (d2_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve d2_
   */
     inline int getDado2 ()const{return d2_;}
 /*PROC setDado1(i) DEV ()
   REQUIERE true
   MODIFICA d1_,l1_,c1_
   EFECTOS da un valor a d1, incrementa l1, suma el nuevo valor del dado a c1,llama a rellenavector1()
   */
    bool setDado1(int i);
 /*PROC setDado2(i) DEV ()
   REQUIERE true
   MODIFICA d2_,l2_,c2_
   EFECTOS da un valor a d2, incrementa l2, suma el nuevo valor del dado a c2,llama a rellenavector2()
   */
    bool setDado2(int i); 
    /*PROC getSuma() DEV (d1_+d2_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve la suma de los dados
   */
     inline int getSuma (){return d1_+d2_;}
    /*PROC getDiferencia() DEV (diferencia entre d1_ y d2_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve la diferencia entre los dados
   */ 
     int getDiferencia (){return((d1_>d2_)? d1_-d2_: d2_-d1_);} 
    /*PROC getLanzamientos1() DEV (l1_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve la cantidad de lanzamientos del dado 1
   */
     int getLanzamientos1 ()const{return l1_;}
    /*PROC getLanzamientos2() DEV (l2_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve la cantidad de lanzamientos del dado 2
   */
     int getLanzamientos2 ()const{return l2_;}
       /*PROC getMedia1() DEV (c1_/l1_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve la media de los valores de los lanzamientos del dado 1
   */
     float getMedia1();
       /*PROC getMedia2() DEV (c1_/l1_)
   REQUIERE true
   MODIFICA nada
   EFECTOS devuelve la media de los valores de los lanzamientos del dado 2
   */
     float getMedia2();
       /*PROC getUltimos1(int *v) DEV ()
   REQUIERE true
   MODIFICA *v
   EFECTOS da a *v los valores de v1_
   */
     void getUltimos1 (int *v);
       /*PROC getUltimos1(int *v) DEV ()
   REQUIERE true
   MODIFICA v
   EFECTOS da a v los valores de v2_
   */
     void getUltimos2 (int *v);
     friend ostream &operator<<(ostream &salida,const Dados &d);
     friend istream &operator>>(istream &entrada, Dados &d);
    };


#endif
