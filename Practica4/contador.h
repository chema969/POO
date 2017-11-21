#ifndef CONTADOR_H
#define CONTADOR_H
#include <list>
class Contador{
   private:
    int contador_,minimo_,maximo_;
    std::list <int> aux_;
    void guarda(int i){aux_.push_front(i);}
   public:
    Contador(int minimo=0,int maximo=1000,int contador=0){minimo_=minimo;maximo_=maximo;contador_=contador;}
    inline int get()const{return contador_;}
    Contador operator=(const Contador &c);
    Contador operator=(const int &c);
    Contador operator++(void);
    Contador operator++(int);
    Contador operator--(void);
    Contador operator--(int);
    friend Contador operator+(const int &a, const Contador &c);
    friend Contador operator+(const Contador &c,const int &a);
    friend Contador operator-(const int &a, const Contador &c);
    friend Contador operator-(const Contador &c,const int &a); 
    Contador undo(int n);  
};



#endif
