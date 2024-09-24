#include <iostream>
using namespace std;
int main(){
cout << "********************************************************"<<endl;
cout << "*bienvenido al juego de la adivinanza *"<<endl;
cout<< "*******************************************************"<<endl;
const int numero_secreto = 42;
int adivina;
bool no_acerto;
int intentos = 0;
double puntos = 100.00;

while (no_acerto){
bool acerto= adivina==numero_secreto ;
bool mayor = adivina >numero_secreto;
cout<<" cual es el numero ? "<<endl;
cin>> adivina;
double puntos_perdidos = abs (adivina - numero_secreto)/2;
puntos = puntos - puntos_perdidos;
cout <<"el valor del numero es " << adivina<< endl;

 if (acerto ){
 cout <<"felicitaciones ... adivino el numero secreto"<<endl;
 no_acerto = false;
 }

 else if (mayor) {
 cout<< "el numero mayor ingresado es mayor que el numero secreto "<<endl;
 }

 else  {
 cout<<"el numero ingresado es menor que el numeor secreto "<<endl ;
 }

}
cout << "finalizo el juego "<<endl;
cout <<"adivino el numero secreto en "<< intentos<< "intentos"<<endl;
cout.precision(2);
cout << fixed;
cout << "su puntuacion fue de "<< puntos << "puntos"<<endl;

}
