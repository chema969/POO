#include "ruleta.h"
#include "jugador.h"
#include "crupier.h"
#include <iostream>
#include <list>
#include <string>
using namespace std;
void menu(int &i);
int main(){
  int i=0;
  string a,b,c;
  cout<<"Nombre del crupier\n";
  cin>>a;
  cout<<"Dni del crupier\n";
  cin>>b;
  cout<<"Codigo del crupier\n";
  cin>>c;
  Crupier crup(b,c,a);
  Ruleta ruleta(crup);
  while(i!=7){
   menu(i);
   switch(i){
    case 1:ruleta.leeJugadores();
           break;
    case 2:ruleta.escribeJugadores();
           break;
    case 3:{
cout<<"La banca tiene "<<ruleta.getBanca()<<" y la bola el valor "<<ruleta.getBola()<<endl;
    list <Jugador> jug;
    list <Jugador>::iterator it;
    jug=ruleta.getJugadores();
    for(it=jug.begin();it!=jug.end();it++)cout<<"El jugador con el DNI "<<it->getDNI()<<" tiene "<<it->getDinero()<<" de dinero\n"; 
}
     break;
    case 4:{
      int banco=ruleta.getBanca();
      list <Jugador>::iterator itt,din;
      list <Jugador> jugg,ja; 
      ja=ruleta.getJugadores(); 
          ruleta.giraRuleta();
          cout<<"Cayo en el "<<ruleta.getBola()<<endl;
          ruleta.getPremios();
          jugg=ruleta.getJugadores();
          din=ja.begin();
      for(itt=jugg.begin();itt!=jugg.end();itt++){
           cout<<"El jugador "<<itt->getDNI()<<" tenia "<<din->getDinero()<<" y gano "<<din->getDinero()-itt->getDinero()<<endl;
           din++;
          }
 }
     break;
    case 5:{
         cout<<"DNI del jugador a eliminar: "<<endl;
         string el_dni;
         cin>>el_dni;
         ruleta.deleteJugador(el_dni);
        }
     break;    
    case 6:{
         string dni,codigo;
         int dinero;
         cout<<"Introduzca DNI: ";
         cin>>dni;
         cout<<"Introduzca codigo: ";
         cin>>codigo;
         Jugador jugao(dni,codigo);
         cout<<"Introduzca dinero: ";
         cin>>dinero;
         jugao.setDinero(dinero);
         ruleta.addJugador(jugao);
     }
     break;
    case 7: cout<<"Fin de la partida :)"<<endl;
     break;
    default:cout<<"Valor invalido"<<endl;
     break;
   }       
}
}


void menu(int &i){
   cout<<"-------------------------\n";
  cout<<"| 1.Cargar jugadores     |\n";
  cout<<"| 2.Guardar jugadores    |\n";
  cout<<"| 3.Ver estado de juego  |\n";
  cout<<"| 4.Girar la ruleta      |\n";
  cout<<"| 5.Eliminar un jugador  |\n";
  cout<<"| 6.Añadir un jugador    |\n";
  cout<<"| 7.Salir del programa   |\n";
  cout<<"--------------------------\n\n";
  cin>>i;
 }
