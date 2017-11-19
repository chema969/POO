#ifndef CONTADOR_H
#define CONTADOR_H

class Contador{
   private:
    int contador_,minimo_,maximo_;
   public:
    Contador(int minimo=0,int maximo=0,int contador=0){minimo_=minimo;maximo_=maximo;contador_=contador;}
    int getContador(){return contador_;}
    Contador operator=(const Contador &c);
    Contador operator=(const int &c);
    friend Contador operator++(void);
    friend Contador operator++(int);
    friend Contador operator+(const int &c);
};



#endif
