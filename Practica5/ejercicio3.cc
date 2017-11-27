#include <iostream>
#include <vector>    
#include <algorithm> 
using namespace std;

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

sort(v.begin(),v.end());


for (int i=0 ; i<v.size() ; i++) cout << v[i] << " ";
cout << endl;

}
