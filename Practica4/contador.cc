#include "contador.h"

 Contador Contador::operator=(const Contador &c){
    contador_=c.contador_;
    minimo_=c.minimo_;
    maximo_=c.maximo_;
   return *this;
  }

Contador Contador::operator=(const int &c){
    contador_=c;
    return *this;
  }

Contador Contador::operator++(void){
  ++contador_;
  return *this;
  }

Contador Contador::operator++(int){
  Contador c=*this;
  ++contador_;
  return c;
  }

Contador Contador::operator+(const int &c){
  contador_+=c;
  return *this;
  }
