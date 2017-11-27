#include <list>
#include "jugador.h"
#include <fstream>
#include "ruleta.h"
#include "persona.h"
#include "crupier.h"
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
Ruleta::Ruleta(Crupier crupier):crupier_(crupier){
  bola_=-1;
  banca_=1000000;
  vecesbola_=0;
  }

bool Ruleta::setBanca(int i){
  if(i<0)return false;
  else{
    banca_=i;
    return true;
    }
}
bool Ruleta::setBola(int i){
  if(i<0||i>36)return false;
  else{
    bola_=i;
    vecesbola_++;
    return true;
    }
}

bool Ruleta::addJugador(Jugador j){
   if(no_existe(j.getDNI())){
      jugadores_.push_back(j);
      string aux;
      aux=j.getDNI()+".txt";
      ofstream fichero(aux.c_str());
      return true;
      }
   else{
      return false;
     }
}




bool Ruleta::no_existe(const string dni){
   list<Jugador>::iterator it;
  for(it=jugadores_.begin();it!=jugadores_.end();++it){
       if(it->getDNI()==dni){
          return false;
        }
     }
    return true;
  }


int Ruleta::deleteJugador(Jugador j){
 return deleteJugador(j.getDNI());
}



int Ruleta::deleteJugador(const string dni){
 if(jugadores_.empty()){
      return -1; 
        }
   else{
    if(!no_existe(dni)){
     list<Jugador>::iterator it; 
     for(it=jugadores_.begin();it!=jugadores_.end();++it){
       if(it->getDNI()==dni){
         jugadores_.erase(it);
         return 1;
        }
     }
     }
}
  if(no_existe(dni)){
    return -2;
    }
 }
   
void Ruleta::escribeJugadores(){
  list<Jugador> ::iterator it;
  ofstream fichero("jugadores.txt");
  for(it=jugadores_.begin();it!=jugadores_.end();++it){
    fichero<<it->getDNI()<<","<<it->getCodigo() <<","<<it->getNombre() <<","<<it->getApellidos()<<","<<it->getDireccion()<<","<<it->getLocalidad()<<","<<it->getProvincia()<<","<<it->getPais()<<","<<it->getDinero()<<"\n";
   }
  fichero.close();
}

void Ruleta::leeJugadores(){
  ifstream fichero("jugadores.txt");
  string aux,aux2;
  jugadores_.clear();
  while(getline(fichero,aux,',')){
    getline(fichero,aux2,',');
    Jugador j(aux,aux2);
    getline(fichero,aux,',');
    j.setNombre(aux);
    getline(fichero,aux,',');    
    j.setApellidos(aux);
    getline(fichero,aux,',');    
    j.setDireccion(aux);
    getline(fichero,aux,',');   
    j.setLocalidad(aux); 
    getline(fichero,aux,',');    
    j.setProvincia(aux);
    getline(fichero,aux,',');    
    j.setPais(aux);
    getline(fichero,aux,'\n');  
    int i=atoi(aux.c_str()); 
    j.setDinero(i);
    jugadores_.push_back(j);
   }
}
 

void Ruleta::giraRuleta(){
    srand(time(NULL));
    setBola(rand()%37);
}

void Ruleta::getPremios(){
   list <Jugador>::iterator it;
   for(it=jugadores_.begin();it!=jugadores_.end();++it){
     list <struct Apuesta> apuesta;
     list <struct Apuesta>::iterator i;
     it->setApuestas();
     apuesta=it->getApuestas();
     for(i=apuesta.begin();i!=apuesta.end();++i){
        if(i->tipo==1){
          if(getBola()==atoi((i->valor).c_str())){
            it->setDinero(it->getDinero()+(i->cantidad)*35); 
            setBanca(getBanca()-(i->cantidad)*35);
            }
           else{
            it->setDinero(it->getDinero()-(i->cantidad)); 
                   setBanca(getBanca()+(i->cantidad));
           }
         }
   
        else if(i->tipo==2){
         int j=getBola();

         if(j==0){
           it->setDinero(it->getDinero()-i->cantidad);
                  setBanca(getBanca()+(i->cantidad));
               }        

         else{
             if((j==2)||(j==4)||(j==6)||(j==8)||(j==10)||(j==11)||(j==13)||(j==15)||(j==17)||(j==20)||(j==22)||(j==24)||(j==26)||(j==28)||(j==29)||(j==31)||(j==33)||(j==35)){
              
                if(i->valor=="negro")  {
                 it->setDinero(it->getDinero()+i->cantidad);
                        setBanca(getBanca()-(i->cantidad));
                           }
             
                else {
                  it->setDinero(it->getDinero()-i->cantidad);
                          setBanca(getBanca()+(i->cantidad));   
                   }
                }

             else{
              if(i->valor=="rojo") { it->setDinero(it->getDinero()+i->cantidad);
                        setBanca(getBanca()-(i->cantidad));
                           }
             
                else {
                  it->setDinero(it->getDinero()-i->cantidad);
                          setBanca(getBanca()+(i->cantidad));   
                   }
                 }
              }
           }
     

     else if(i->tipo==3){
          if(getBola()==0){
              it->setDinero(it->getDinero()-i->cantidad);
                  setBanca(getBanca()+(i->cantidad));
               }        
           else{
               if(getBola()%2==0){
                   if(i->valor=="par")  {
                     it->setDinero(it->getDinero()+i->cantidad);
                        setBanca(getBanca()-(i->cantidad));
                           }
             
                else {
                  it->setDinero(it->getDinero()-i->cantidad);
                          setBanca(getBanca()+(i->cantidad));   
                   }
                }  
              else{
                 if(i->valor=="impar")  {
                 it->setDinero(it->getDinero()+i->cantidad);
                        setBanca(getBanca()-(i->cantidad));
                           }
             
                else {
                  it->setDinero(it->getDinero()-i->cantidad);
                          setBanca(getBanca()+(i->cantidad));   
                   }
                }

             }
       }

   else if(i->tipo==4){
          if(getBola()==0){
              it->setDinero(it->getDinero()-i->cantidad);
                  setBanca(getBanca()+(i->cantidad));
               }        
           else{
               if(getBola()<=18){
                   if(i->valor=="bajo")  {
                     it->setDinero(it->getDinero()+i->cantidad);
                        setBanca(getBanca()-(i->cantidad));
                           }
             
                else {
                  it->setDinero(it->getDinero()-i->cantidad);
                          setBanca(getBanca()+(i->cantidad));   
                   }
                }  
              else{
                 if(i->valor=="alto")  {
                 it->setDinero(it->getDinero()+i->cantidad);
                        setBanca(getBanca()-(i->cantidad));
                           }
             
                else {
                  it->setDinero(it->getDinero()-i->cantidad);
                          setBanca(getBanca()+(i->cantidad));   
                   }
                }

             }
       }


   

    
   }
  }

} 


void Ruleta::getEstadoRuleta(int &numjugadores,int &sumdinero,int &vecesbola,int &banca){
    numjugadores=jugadores_.size();
    list <Jugador>::iterator it; 
    sumdinero=0;
    for(it=jugadores_.begin();it!=jugadores_.end();++it)
       sumdinero=sumdinero+it->getDinero();
    sumdinero=banca_+sumdinero;
    vecesbola=vecesbola_;
    banca=1000000-banca_;
}

