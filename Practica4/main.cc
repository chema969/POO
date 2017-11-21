#include <iostream>
#include "contador.h"

using namespace std;
int main(){
 Contador c,v(0,1000,32);
 cout<<c.get()<<endl;
 c=4;
 cout<<c.get()<<endl;
 c=c+4;
 cout<<c.get()<<endl;
 c=4+c;
 cout<<c.get()<<endl;
 c++;
 cout<<c.get()<<endl;
 ++c;
 cout<<c.get()<<endl;
 c--;
 cout<<c.get()<<endl;
 --c;
 cout<<c.get()<<endl;
 c=4-c;
 cout<<c.get()<<endl;
 c=c-4;
 cout<<c.get()<<endl;
 c.undo(4);
 cout<<c.get()<<endl;
 }
