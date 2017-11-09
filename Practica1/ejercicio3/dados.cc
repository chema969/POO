#include "dados.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>
Dados::Dados(){
     srand(time(NULL));
     d1_=d2_=1;
     c1_=c2_=l1_=l2_=0;
     v1_.resize(5,0);
     v2_.resize(5,0);
    }


void Dados::lanzamiento(){
  setDado1(rand()%6+1);
  setDado2(rand()%6+1);
 }

float Dados::getMedia1(){
   if(l1_!=0) return ((float) c1_)/l1_;
   else return 0.0;
   }



float Dados::getMedia2(){
   if(l1_!=0) return ((float) c2_)/l2_;
   else return 0.0;
   }


  
 
bool Dados::setDado1(int i){
   if((i>0)&&(i<7)){
      d1_=i;
      l1_++;
      c1_=c1_+d1_;
      rellenavector1();
      return true;
   }
   else{
      return false;
   }
  }

bool Dados::setDado2(int i){
   if((i>0)&&(i<7)){
      d2_=i;
      c2_=c2_+d2_;
      l2_++;
      rellenavector2();
      return true;
   }
   else{
      return false;
   }
  }


void Dados::rellenavector1(){
int i;
for(i=3;i>-1;i--){
   v1_[i+1]=v1_[i];
  }
  v1_[0]=d1_;
}

void Dados::getUltimos1(int *v){
  int i;
   for(i=0;i<5;i++){
  v[i]=v1_[i];
  }
  }

void Dados::rellenavector2(){
int i;
for(i=3;i>-1;i--){
   v2_[i+1]=v2_[i];
  }
  v2_[0]=d2_;
}



void Dados::getUltimos2(int *v){
int i;
  for(i=0;i<5;i++){
  v[i]=v2_[i];
  }
  }




