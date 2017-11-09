#include "dados.h"
#include <iostream>

  int main(){
   Dados d;
   int i=0;
   d.lanzamiento();
   std::cout<<"El dado 1 es "<<d.getDado1()<<"\n";
   std::cout<<"El dado 2 es "<<d.getDado2()<<"\n";
   std::cout<<"La suma total es "<<d.getSuma()<<"\n";
    for(i=0;i<4;i++){
      d.setDado1(i+1);
      std::cout<<"El dado 1 es "<<d.getDado1()<<"\n";
      d.setDado2(i+1);
      std::cout<<"El dado 2 es "<<d.getDado2()<<"\n";
     }
    d.imprimir();
  }

