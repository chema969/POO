#include "contador.h"
#include <list>
using namespace std;
 Contador::Contador(int minimo,int maximo,int contador){
    minimo_=minimo;maximo_=maximo;
     if((maximo>minimo)&&(contador<=maximo)&&(contador>=minimo))contador_=contador;
     else contador_=0;
  }

 Contador Contador::operator=(const Contador &c){
   if((c.contador_<=maximo_)&&(c.contador_>=minimo_)){
    contador_=c.contador_;
     guarda(contador_);}
   return *this;
  }

Contador Contador::operator=(const int &c){
     if((c<=maximo_)&&(c>=minimo_))
    contador_=c;
     else{
      if (c>maximo_) contador_=maximo_;
      else contador_=minimo_;
      }
     guarda(contador_);
    return *this;
  }

Contador Contador::operator++(void){
 if(contador_<maximo_){
  ++contador_;
     guarda(contador_);
   }
  return *this;
  }

Contador Contador::operator--(void){
 if(contador_>minimo_){
  --contador_;
     guarda(contador_);}
  return *this;
  }

Contador Contador::operator++(int){
  Contador c=*this;
 if(contador_<maximo_){
  ++contador_;
     guarda(contador_);}
  return c;
  }

Contador Contador::operator--(int){
  Contador c=*this;
if(contador_>minimo_){
  --contador_;
     guarda(contador_);}
  return c;
  }

Contador operator+(const int &a,const Contador &c){
  Contador x;
  if((c.contador_+a)<=c.maximo_)
  x.contador_=c.contador_+a; 
  else x.contador_=c.maximo_; 
  x.guarda(x.contador_);
  return x;
  }

Contador operator+(const Contador &c,const int &a){
   Contador x;
  if((c.contador_+a)<=c.maximo_)
  x.contador_=c.contador_+a; 
  else x.contador_=c.maximo_; 
  x.guarda(x.contador_);
  return x;
  }

Contador operator-(const int &a,const Contador &c){
  Contador x;
  if((a-c.contador_)>=c.minimo_)
  x.contador_=a-c.contador_;  
  else x.contador_=c.minimo_; 
  x.guarda(x.contador_);
  return x;
  }

Contador operator-(const Contador &c,const int &a){
  Contador x;
  if((c.contador_-a)>=c.minimo_)
  x.contador_=c.contador_-a;  
  else x.contador_=c.minimo_; 
  x.guarda(x.contador_);
  return x;
  }

bool Contador::undo(int n){
int k;
k=aux_.size();
 if((k<n)||(n<0)) return false;
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
