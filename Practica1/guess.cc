#include <iostream>
#include <ctime>
#include <cstdlib>



int main(){
  int numerorand,i=0,k=0;
  srand(time(NULL));
  numerorand=rand()%10+1;
   while(i!=numerorand){
  std::cout<<"Introduzca un numero del uno al diez: ";
  std::cin>>i; 
    if(i==numerorand){
      std::cout<<"Acertaste el numero\n";
      }
      else{  
        if(i<numerorand){
          std::cout<<"El numero es mas pequeño\n";
            }
            else{
              std::cout<<"El numero es mayor\n";
             }
          
         }
    k++;   
   }
  std::cout<<"Has realizado "<<k<<" intentos\n";
}



