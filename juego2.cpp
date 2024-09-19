

#include <iostream>
using namespace std;
int main(){
cout << "********************************************************"<<endl;
cout << "*bienvenido al juego de la adivinanza *"<<endl;
cout<< "*******************************************************"<<endl;
const int numero_secreto = 42;
int adivina;
bool acerto= adivina==numero_secreto ;
bool mayor = adivina >numero_secreto;
cout<<" cual es el numero ? "<<endl;
cin>> adivina;
cout <<"el valor del numero es " << adivina<< endl;
 if (acerto ){
 cout <<"felicitaciones ... adivino el numero secreto"<<endl;
 }

 else if (mayor) { 
 cout<< "el numero mayor ingresado es mayor que el numero secreto "<<endl;
 }

 else  {
 cout<<"el numero ingresado es menor que el numeor secreto "<<endl ;
 }

}

