#include "contador.h"
#include <list>
using namespace std;
 Contador Contador::operator=(const Contador &c){
    contador_=c.contador_;
     guarda(contador_);
   return *this;
  }

Contador Contador::operator=(const int &c){
    contador_=c;
     guarda(contador_);
    return *this;
  }

Contador Contador::operator++(void){
  ++contador_;
     guarda(contador_);
  return *this;
  }

Contador Contador::operator--(void){
  --contador_;
     guarda(contador_);
  return *this;
  }

Contador Contador::operator++(int){
  Contador c=*this;
  ++contador_;
     guarda(contador_);
  return c;
  }

Contador Contador::operator--(int){
  Contador c=*this;
  --contador_;
     guarda(contador_);
  return c;
  }

Contador operator+(const int &a,const Contador &c){
  Contador x;
  if((c.contador_+a)<c.maximo_)
  x.contador_=c.contador_+a;  
  x.guarda(x.contador_);
  return x;
  }

Contador operator+(const Contador &c,const int &a){
  Contador x;
  if((c.contador_+a)<c.maximo_)
  x.contador_=c.contador_+a; 
  x.guarda(x.contador_); 
  return x;
  }

Contador operator-(const int &a,const Contador &c){
  Contador x;
  if((c.contador_-a)>c.minimo_)
  x.contador_=c.contador_-a;  
  x.guarda(x.contador_);
  return x;
  }

Contador operator-(const Contador &c,const int &a){
  Contador x;
  if((c.contador_+a)>c.minimo_)
  x.contador_=c.contador_-a;  
  x.guarda(x.contador_);
  return x;
  }

bool Contador::undo(int n){
 if(aux_.size()<n) return false;
  list <int>::iterator it,j;
  it=aux_.begin();
  for(int i=0;i<n;i++){
    j=it;
    it++;
    aux_.erase(j);
   }
  contador_=*it;
  return true;
  }  
