#include <iostream>
using namespace std;
template <class U>
void imprime(U imp,int tam){
  for(int i=0;i<tam;i++) cout<<imp[i]<<" ";
   cout<<endl;
}

int main(){
  int a[5]={1,3,5,7,9};
  float b[4]={5.6, 7.8, 3.9, 1.2};
  char c[10]="holamundo";
  imprime(a,5);
  imprime(b,4);
  imprime(c,9);
  }
