#include <iostream>
#include "contador.h"

using namespace std;
int main(){
 Contador c,v(0,1000,32);
 cout<<c.getContador()<<endl;
 c=4;
 cout<<c.getContador()<<endl;
 }
