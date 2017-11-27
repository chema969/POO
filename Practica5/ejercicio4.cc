#include <iostream>
#include <vector>    
#include <algorithm> 
using namespace std;
bool menor(int i,int j){return i>j;}

int main(void)
{
vector <int> v(10);
int d;


for (int i=0 ; i<v.size() ; i++){
   cout<<"v["<<i<<"]:";
   cin>>d;
   v[i]=d;
  }
for (int i=0 ; i<v.size() ; i++) cout << v[i] << " ";
cout << endl;
cout<<"1.ordenado de menor a mayor\n2.ordenado de mayor a menor.\n";
cin>>d;
if(d==1)
sort(v.begin(),v.end());
else sort(v.begin(),v.end(),menor);


for (int i=0 ; i<v.size() ; i++) cout << v[i] << " ";
cout << endl;

}
