#include <iostream>
#include <vector>    
#include <algorithm> 
#include <string>
#include <cstdlib>
#include <ctime>
#include "jugador.h"

using namespace std;
bool maymen(Jugador i,Jugador j);
bool menmay(Jugador i,Jugador j);
int main(){
  vector <Jugador> j;
  int d;
  srand(time(NULL));
  for(int i=0;i<5;i++){
     int a,b;
     string aux,aux2;
     a=rand()%1000;
     b=rand()%1000;
     aux=to_string(a);
     aux2=to_string(b);
     Jugador jug(aux,aux2);
     j.push_back(jug);
    }
for (int i=0 ; i<j.size() ; i++) cout <<j[i].getDNI() << " ";
cout << endl;

cout<<"1.ordenado de menor a mayor\n2.ordenado de mayor a menor.\n";
cin>>d;
  if(d==1) sort(j.begin(),j.end(),maymen);
  else sort(j.begin(),j.end(),menmay);

for (int i=0 ; i<j.size() ; i++) cout <<j[i].getDNI() << " ";
cout << endl;
}



bool maymen(Jugador i,Jugador j){ return stoi(j.getDNI())>stoi(i.getDNI());}
bool menmay(Jugador i,Jugador j){ return stoi(i.getDNI())>stoi(j.getDNI());}
