#include <iostream>
using namespace std;
template <class T> class MiClase{
private:
T x_, y_;
public:
MiClase (T a, T b){ x_=a; y_=b;};
T div(){return x_/y_;};
inline T operator/(MiClase q){T aux1,aux2; aux1=x_/y_; aux2=q.x_/q.y_;return aux1/aux2;}
};
int main()
{
MiClase <int> iobj(10,3);
MiClase <double> dobj(3.3, 5.5);
cout << "divisi ́on entera = " << iobj.div() << endl;
cout << "divisi ́on real = " << dobj.div() << endl;
MiClase <int> i(10,1);
MiClase <int> j(5,1);
int r=i/j;
cout<<"division entre mis clases="<<r<<endl;
}


